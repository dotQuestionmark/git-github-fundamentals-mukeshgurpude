#include<stdio.h>

int main(){
  char character[] = "*";
  int width = 7, height = 5;

  // Top line
  for(int i=0; i<width; i++) printf(character);
  printf("\n");

  // upper vertical line
  for(int i=0; i<(height/2); i++) printf("%s\n", character);

  // Middle Line
  for(int i=0; i<width; i++) printf(character);
  printf("\n");

  // Lower vertical line
  for(int i=0; i<(height/2); i++) printf("%s\n", character);
  
  // Lower Line
  for(int i=0; i<width; i++) printf(character);
  printf("\n");
  
  return 0;
}
