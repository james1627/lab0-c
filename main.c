// Author: James Overmoyer jpo5322@psu.edu
// Collaborator: geng niu gjn5124@psu.edu
// Collaborator: Kenleigh leonard kml6565@psu.edu
// Collaborator: Junyang guan jmg7510@psu.edu
// Section: 4
// Breakout: 12

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  double gradePercentage[8] = {93, 90, 87, 83, 80, 77, 70, 60};
  char *gradeLetters[8] = {"A", "A-", "B+","B","B-","C+","C","D"};
  char *grade = "F";

  double number = atof(readline("Enter your CMPSC 131 grade: "));
  
  for(int c = 0; c<=7;c++){
    if(number >= gradePercentage[c]){
      grade = gradeLetters[c];
      break;
    }
  }
  
  printf("Your letter grade for CMPSC 131 is %s.\n", grade);
  return 0;
}