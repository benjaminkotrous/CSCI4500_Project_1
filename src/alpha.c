#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

  int status = 0;
  char c = 'a';
  int len = 0;
  char line[101] = {0};

  for(;;){
  status = read(0,&c,1);
  //write(1,&c,1);
  if(status == 0){
    printf("hello");
    return(0);
  }


    if(c == '\n'){
    line[len++] = '\0';
    break;
}
    line[len++] = c;
  }


  line[len++] = '\0';
  printf(line,'\n');
  printf('\n');
  return 0;
}
