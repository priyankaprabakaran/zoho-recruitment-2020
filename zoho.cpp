#include<stdio.h>
#include <string.h>
int main()
{
  // variable
  char str[20];
  int z;

  // take input
  printf("Enter a string: ");
  scanf("%[^\n]",str);

  // print pattern
  // outer loop for row
  for(int i=0; str[i]!='\0'; i++)
  {
    // inner loop for column
    for(int j=0; j<=i; j++)
    {
      // display
      z = (strlen(str)/2 + j)%strlen(str);
      printf("%c", str[z]); 
    }

    printf("\n"); // new line
  }

  return 0;
}