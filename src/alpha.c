#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <ctype.h>

void rd(){
    int status = 0;
    char c;
    int len = 0;
    int init = 0;
    int empty = 0;
    char line[101] = {0};

    for(;;){
        status = read(0,&c,1);
        //write(1,&c,1);
        if(status == 0){
            printf("nothng");
            break;
        }



        if(isalpha(c)){
            empty = 1;
            //printf("isChar");
        }
            line[len++] = c;
        if(empty == 0){
            //printf("If blanks or tabs or nothing entered");
            continue;
        }
        if(c == '\n' && empty == 1){
            //printf("End Case");
            break;
        }




    }
    line[len++] = '\0';
    printf(line,'\n');
}

void prse(){

}
int main(int argc, char const *argv[]) {
    rd();

  return 0;

}
