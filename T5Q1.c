#include <stdio.h>
void main{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>17){
        printf("Congratulations! You are eligible to cast your vote.")
    }
    else{
        printf("Sorry! You are not eligible to cast your vote.")
    }
}