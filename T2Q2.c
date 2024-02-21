//Input 3 numbers (real or integer)and find the average of the three numbers with precision of format as 8.3
#include<stdio.h>
void main(){
    float num1;float num2;float num3;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the second number:");
    scanf("%f",&num2);
    printf("Enter the third number:");
    scanf("%f",&num3);
    float avg = (num1+num2+num3)/3;
    printf("The avg of the three numbers is %8.3f.",avg);

}
