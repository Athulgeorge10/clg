//Write a C program to read an integer number from keyboard and find the square of the number.
#include<stdio.h>
#include<math.h>
void main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("The square of %d is %f.",num,pow(num,2));
}
