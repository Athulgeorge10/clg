//Write a C program to swap two numbers using temporary variable
#include<stdio.h>
void main(){
    int a,b,t;
    printf("Enter value for a:");
    scanf("%d",&a);
    printf("Enter value for b:");
    scanf("%d",&b);
    printf("The value of a is %d and b is %d.\n",a,b);
    t=a;a=b;b=t;
    printf("After swapping!!\n");
    printf("The value of a is %d and b is %d.\n",a,b);
}
