//Print all even numbers between 1 and 20 using a while loop.
#include<stdio.h>
void main(){
    int i=1;
    while(i<20){
        if(i%2==0){
            printf("%d\n",i);
        }
        i++;
    }
}