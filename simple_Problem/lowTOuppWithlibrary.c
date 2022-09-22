#include<stdio.h>
int main(){
    char lower,upper;

    printf("Enter any Lowercase letter: ");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("The Uppercase letter: %c",upper);
return 0;
}