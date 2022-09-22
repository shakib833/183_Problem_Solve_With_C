#include <stdio.h>

int main (int argc, char *argv[]) {
    int num1,num2,num3,sum;
    float avg;
    printf("Enter Three Number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum = num1 + num2 + num3;
    avg = (float)sum/3;
    printf("The sum is: %d \n",sum);
    printf("The avg is: %0.2f \n",avg);

    return 0;
}