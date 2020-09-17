// Author: James Overmoyer jpo5322@psu.edu
// Collaborator: Alexander Leggiero arl5733@psu.edu
// Collaborator: Yu-Hsiang Huang ykh5222@psu.edu
// Collaborator: Lynn Francis jtf5383@psu.edu
// Section: 4
// Breakout: 10

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int sum_n(int n) {
  if (n == 0){
    return 0;
  }
  return n + sum_n(n-1);
}
void print_n(const char *s, int n){
  if (n == 0){
    return;
  }
  printf("%s\n", s);
  print_n(s, n-1);
}

int main(void) {
  int number = atoi(readline("Enter an int: "));
  printf("sum is %d.\n", sum_n(number));
  char *word = readline("Enter a string: ");
  print_n(word, number);
  return 0;
}

