//Reverse the digits of a given number using a while loop.
#include <stdio.h>
void main(){
    int num,rem,rev=0;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    while(num>0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    printf("Reverse of the entered number is: %d", rev);
}