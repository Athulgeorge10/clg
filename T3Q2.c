//Swap two numbers without using temporary variable
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter value for a:");
    scanf("%d",&a);
    printf("Enter value for b:");
    scanf("%d",&b);
    printf("The value of a is %d and b is %d.\n",a,b);
    a=a+b;b=a-b;a=a-b;
    printf("After swapping!!\n");
    printf("The value of a is %d and b is %d.\n",a,b);
}
