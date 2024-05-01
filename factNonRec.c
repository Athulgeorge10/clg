#include<stdio.h>
int fNonRec(int n){
    int factorial = 1;
    for(int i=1 ; i<=n ; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int num;
    printf("Enter a natural number:");
    scanf("%d", &num);
    if (num<0)
        printf("Factorial is not defined for negative numbers\n");
    
    else{
        int NRfactorial = fNonRec(num);
        printf("Factorial of %d without using recursion: %d\n", num, NRfactorial);
    }
    return 0;
}