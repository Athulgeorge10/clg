//Floyd’s triangle
#include<stdio.h>
void main(){
    int rows,num=1;
    printf("Enter the no of rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}