//Display the multiplication table of a given number using a while loop.
#include<stdio.h>
void main(){
    int n,i=1;
    printf("Enter number for multiplication table:");
    scanf("%d",&n);
    while(i<=10){
        printf("%d x %d = %d\n",i,n,i*n);
        i++;
    }
}