#include <stdio.h>
#include <stdlib.h>

// if else simulator

int main() {
  const int MAGIC_NUMBER = 42;
  unsigned int answer = 0, diff = 0;
  printf("Pick a number!\n");
  while(answer != MAGIC_NUMBER){
    fscanf(stdin, "%d", &answer);
    diff = abs(MAGIC_NUMBER - answer);
    if(answer < MAGIC_NUMBER){
      if(diff <= 5){
        printf("You're getting closer!\n");
      } else {
        printf("Danmn you're lower than assembly!\n");
      }
    } else if(answer > MAGIC_NUMBER) {
        if(diff >= 5){
          printf("You're high as if you were at the top of mount everest!\n");
        } else {
          printf("A little bit high!\n");
        }
      } else {
        printf("You got it!\n");
      }
  }
  return 0;
}
