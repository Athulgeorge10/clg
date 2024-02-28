//Write a C program to read the age of a candidate and determine whether he/she is eligible to cast his/her vote. (Use if-else)
#include<stdio.h>
void main(){
    int ageRam,ageShyam,ageAjay;
    printf("Enter age of Ram:");
    scanf("%d",&ageRam);
    printf("Enter age of Shyam:");
    scanf("%d",&ageShyam);
    printf("Enter age of Ajay:");
    scanf("%d",&ageAjay);
    if(ageRam<ageShyam && ageRam<ageAjay){
        printf("Ram is the youngest!");    
    }
    else if(ageShyam<ageRam && ageShyam<ageAjay){
        printf("Shyam is the youngest!");
    }
    else{
        printf("Ajay is the youngest!");
    }
}
