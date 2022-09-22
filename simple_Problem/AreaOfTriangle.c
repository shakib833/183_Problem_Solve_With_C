// Area Of triangle
#include <stdio.h>
int main () {
    float base,height,area;
    printf("Enter base: ");
    scanf("%f",&base);
    printf("Enter height: ");
    scanf("%f",&height);
    area = (base * height)/2;
    printf("The area is : %0.2f ",area);
    
    return 0;
}