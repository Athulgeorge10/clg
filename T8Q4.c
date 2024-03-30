//Print the following diamond pattern
#include<stdio.h>
void main(){
    int n=0;
    for(int i=4;i>0;i--){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int j=4;j>=(i-n);j--){
            printf("*");
        }
        n++;
        printf("\n");
    }
    n=0;
    for(int i=4;i>1;i--){
        for(int j=4;j>=i;j--){
            printf(" ");
        }
        for(int j=(i-n);j>=0;j--){
            printf("*");
        }
        n++;
        printf("\n");
    }
}