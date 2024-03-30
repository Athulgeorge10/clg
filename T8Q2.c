//Pattern printing
#include<stdio.h>
void main(){
    int rows;
    printf("Enter the no of rows:");
    scanf("%d",&rows);
    printf("Pattern:\n");
    for(int i=rows;i>0;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}    