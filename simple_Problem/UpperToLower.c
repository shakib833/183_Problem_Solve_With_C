#include<stdio.h>
int main(){
   char lower;
   printf("Enter any Lowercase letter: ");
   scanf("%c",&lower);

   printf("The Uppercase letter is: %c ",lower-32);
return 0;
}