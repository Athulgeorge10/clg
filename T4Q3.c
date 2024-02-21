//Write a C program to calculate Compound Interest.
#include<stdio.h>
#include<math.h>
void main(){
    float p,r,t;
    printf("Enter principle amount:");
    scanf("%f",&p);
    printf("Enter the rate of interest(in %%):");
    scanf("%f",&r);
    printf("Enter time(in yrs):");
    scanf("%f",&t);
    printf("Compound Interest = %0.2f\n",(p*pow((1+r/100),t))-p);
    printf("Final amount after %0.1f yrs = %0.2f",t,p*pow((1+r/100),t));
}
