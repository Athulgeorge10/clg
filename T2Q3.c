//Take two input values and perform all arithmetic operations on the given input.
#include<stdio.h>
#include<math.h>
void main(){
    float num1;float num2;
    printf("Enter first number:");
    scanf("%f",&num1);
    printf("Enter second number:");
    scanf("%f",&num2);
    printf("%f+%f = %f",num1,num2,num1+num2);
    printf("\n%f-%f = %f",num1,num2,num1-num2);
    printf("\n%f*%f = %f",num1,num2,num1*num2);
    printf("\n%f/%f = %f",num1,num2,num1/num2);
    printf("\n%f%%%f = %f",num1,num2,fmod(num1,num2));
}
