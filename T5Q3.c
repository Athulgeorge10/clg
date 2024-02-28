//Program checks whether a number given by the user is zero, positive, or negative
#include<stdio.h>
void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0){
        printf("It is a positive number!");
    }
    else if(num==0){
        printf("It is zero!",num);
    }
    else{
        printf("It is a negative number!");
    }
}