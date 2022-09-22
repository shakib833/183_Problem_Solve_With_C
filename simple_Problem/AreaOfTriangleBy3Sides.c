//find the area of triangle by it's three sides
#include <stdio.h>

int main () {
    float a,b,c,s,area;
    printf("Enter the values: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of Triangle is: %0.2f",area);
    return 0;
}