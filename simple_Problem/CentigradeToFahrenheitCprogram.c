//Centigrade to Fahrenheit C program
#include <stdio.h>
int main () {
    float c,f;
    printf("Enter centigrade: ");
    scanf("%f",&c);

    f = (c*1.8) + 32;
    printf("Fahrenheit: %0.2f ",f);
    return 0;
}