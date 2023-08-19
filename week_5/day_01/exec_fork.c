/*
    execvp : Използвайки тази команда, създаденият 
    дъщерен процес не трябва да изпълнява същата програма 
    като родителския процес. Системните извиквания от типа
     exec позволяват на процес да изпълнява всякакви
      програмни файлове, които включват двоичен изпълним
       файл или скрипт на обвивка. 
*/

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
    while(1){
        char buf[200];
        int char_c = 0;
        char cur_sym = '\0';

        while(cur_sym != '\n'){
            cur_sym = getc(stdin);
            buf[char_c++] = cur_sym;
        }

        buf[char_c - 1] = '\0';
        fwrite(buf, sizeof(char), char_c, stdout);

        // split string into whitespaces and get seperate args
        char *exec_argv[10];
        exec_argv[0] = strtok(buf, " ");


        int pid = fork();

        if(pid == -1){
            return 1;
        } else if (pid == 0) {
            printf("%s", exec_argv[0]);
            printf("%s", exec_argv[1]);
            execvp(exec_argv[0], exec_argv);
            exit(1);
        } else{
            // parent
            int wstatus;
            pid_t child_pid = wait(&wstatus);
            if(!WIFEXITED(wstatus)){
                perror(" ");
            } else {
                printf("Child return code: %d\n", wstatus);
            }
            return 0;
        }
    }
} 