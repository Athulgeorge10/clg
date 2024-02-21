//C Program To Find Simple Interest.
#include<stdio.h>
void main(){
    float P,R,T;
    printf("Enter the principle amount:");
    scanf("%f",&P);
    printf("Enter the rate of interest(%%):");
    scanf("%f",&R);
    printf("Enter time(in yrs):");
    scanf("%f",&T);
    printf("Simple Interest = %0.2f",(P*R*T)/100);
}
