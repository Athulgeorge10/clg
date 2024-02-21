//Program to check whether the given number is even or odd
#include<stdio.h>
void main(){
    int num1;
    printf("Enter a number:");
    scanf("%d",&num1);
    if(num1%2 == 0){
        printf("%d is a even number.",num1);
    }
    else{
        printf("%d is a odd number.",num1);
    }
}
