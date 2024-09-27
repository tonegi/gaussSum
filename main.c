#include <stdio.h>

int main(void) {
  int i = 1, sum = 0;
  
  do { 
    sum = sum + i;
    i++;
   } while (i <= 10);
  
  printf("The sum of the first 10 numbers: %d\n",sum);
  
  return 0;
}
