//Fahrenheit to Centigrade
#include <stdio.h>
int main () {
    float f,c;
    printf("Enter Fahrenheit: ");
    scanf("%f",&f);
    c = (f-32)/1.8;
    printf("centigrade: %0.2f",c);
    return 0;
}