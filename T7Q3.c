//Compute the factorial of a given number using a while loop.
#include<stdio.h>
void main(){
    int n,fact=1,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        fact=fact*i;
        i++;   
    }
    printf("The factorial of %d is %d.",n,fact);
}