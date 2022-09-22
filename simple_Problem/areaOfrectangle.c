//area of a rectangle.
#include <stdio.h>

int main () {
    float height,weight,area;
    printf("Enter height:");
    scanf("%f",&height);
    printf("Enter weight:");
    scanf("%f",&weight);
    area = height * weight;
    printf("The area is: %0.2f",area);
    return 0;
}