/*
    এ সমস্যায় আপনাকে তিনটি বাস্তব সংখ্যা A, B, C ইনপুট হিসেবে দেয়া হবে। আপনাকে তাদের গড় আউটপুট দিতে হবে এভাবেঃ Average = x , এখানে ‘x’র জায়গায় গড় মান প্রিন্ট করতে হবে।
ইনপুট
আপনাকে ইনপুট হিসেবে  তিনটি বাস্তব সংখ্যা A, B, C দেয়া হবে যেখানে 1<= A, B, C <= 100।
আউটপুট
আউটপুট হিসেবে সংখ্যা তিনটির গড় দশমিকের পর আট ঘর পর্যন্ত প্রিন্ট করতে হবে।  বোঝার জন্য নিচের উদাহরণ ভাল মত লক্ষ্য করুন।

উদাহরণ
ইনপুট                        
7 6.5 6.5
আউটপুট 
Average = 6.66666667
*/
#include<stdio.h>

int main(){

    float A,B,C,avg;
    scanf("%f %f %f",&A,&B,&C);
    avg = (A+B+C)/3;   
    printf("Average = %0.8f \n",avg);
    return 0;
}