#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(){
    while(1){
    char line_buffer[200];
    //getline(char **__restrict lineptr, size_t *__restrict n, FILE *__restrict stream)
    int char_count = 0;
    // while (line_buffer[char_count] != '\n') {
    //     line_buffer[char_count] = getc(stdin);
    // }

    char curr_sym = '\0';
    while(curr_sym != '\n'){
        curr_sym = getc(stdin);
        line_buffer[char_count++] = curr_sym;
    }
    line_buffer[char_count - 1 ] = '\0';
    // line buff = "ls -la";
    fwrite(line_buffer, sizeof(char), char_count, stdout);

    //split string into separate argument
    char *exec_argv[10];
    // exec_argv[0] = "ls";
    // exec_argv[1] = "-la"; 
    exec_argv[0] = strtok(NULL, " ");
    for(int i = 0; exec_argv[i-1] !=NULL ; i++){
        exec_argv[i] = strtok(NULL, " ");
    }
    // for (int i = 0; i < 10 ; i ++) {
    //     printf("%s\n", exec_argv[i]);
    // }

    int pid = fork();
    if(pid == -1){
        exit(-1);
    }else if(pid == 0){
        // child
        //      ls-la->"ls"       ls-la-> ["ls", "-la"]
        execvp(exec_argv[0], exec_argv);
        perror("Exec failed");
        exit(1);
    } else {    
        // parent 
        //изчаква детето да приключи и печата статус кода мъ
        int wstatus;
        pid_t child_pid = wait(&wstatus);
        if(!WIFEXITED(wstatus)){
            perror("Child did no exit normally");
        } else{
            printf("Child return code %d \n", WEXITSTATUS(wstatus));
        }

        return 0;
    }
    }
}