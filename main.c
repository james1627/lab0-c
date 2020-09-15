// Author: James Overmoyer jpo5322@psu.edu
// Collaborator: @psu.edu
// Collaborator: @psu.edu
// Collaborator: @psu.edu
// Section: 4
// Breakout: 4

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int sum_n(int n) {
  if (n-1 == 0){
    return n;
  }
  return n + sum_n(n-1);
}
void print_n(const char *s, int n){
  printf("%s\n", s);
  if (n-1 == 0){
    return;
  }
  print_n(s, n-1);
}

int main(void) {
  int number = atoi(readline("Enter an int: "));
  printf("sum is %d.\n", sum_n(number));
  char *word = readline("Enter a string: ");
  print_n(word, number);
  return 0;
}

