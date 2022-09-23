//area of a circle
#include <stdio.h>
#include<math.h>
int main () {
    float radius,area,PI=3.1416;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    area = (PI * radius * radius);   // you can also use M_PI. but before use it you have add a header file we call it math.h
    printf("Area of circle: %0.2f",area);
    return 0;
}