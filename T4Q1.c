//C Program to Add Two Complex Numbers.
#include<stdio.h>
void main(){
    int r1,r2,i1,i2;
    printf("Enter the real part of first complex number:");
    scanf("%d",&r1);
    printf("Enter the imaginary part of first complex number:");
    scanf("%d",&i1);
    printf("Enter the real part of second complex number:");
    scanf("%d",&r2);
    printf("Enter the imaginary part of second complex number:");
    scanf("%d",&i2);
    printf("(%d+%di) + (%d+%di) = (%d+%di)",r1,i1,r2,i2,(r1+r2),(i1+i2));
}
