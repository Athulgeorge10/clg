//Use Nested for loops for checking prime numbers within a certain range.
#include<stdio.h>
void main(){
    int range,check;
    printf("Enter the range of numbers to check for prime:");
    scanf("%d",&range);
    printf("%d ",2);
    for(int i=3;i<=range;i++){
        check=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                check=1;
            }
        }
        if(check==0){    
            printf("%d ",i);
        }
    }
}