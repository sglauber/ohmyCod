#include  <stdio.h>
#include  <stdlib.h>

int main() {
  printf("Hi mom!");
  printf("\nPress enter to continue...");
  int c = 0;
  while((getc(stdin)) != '\n'){
    printf("\nPress any key to continue...");
  };
  return 0;
}
