#include<stdio.h>
void main()
{
    char ch;
    printf("Enter your score: ");
    scanf("%c",&ch);




    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
     printf(" \n\a your Enter a Vowel. ");
        break;
    default:
        printf(" \n\a your Enter a Consonant. ");
        break;

    }
    
}

