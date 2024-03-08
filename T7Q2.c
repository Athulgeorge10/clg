//Calculate the sum of the first N natural numbers using a while loop.
#include<stdio.h>
void main(){
    int n,sum=0,i=1;
    printf("Enter a natural number:");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("Sum of first %d natural numbers is %d.",n,sum);
}