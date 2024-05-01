#include<stdio.h>
#include<string.h>

void reverse(char arr[]){
    char rev[strlen(arr)];
    for(int i=0, j=strlen(arr)-2 ; i<strlen(arr) ; i++,j--){
        rev[i] = arr[j];
    }
    printf("Reversed String is: ");
    for(int i=0 ; arr[i]!='\n' ; i++){
        printf("%c", rev[i]);
    }
}

int main(){
    char arr[100];
    printf("Enter a string:");
    fgets(arr , sizeof(arr) , stdin);
    printf("Original string is:");
    puts(arr);
    reverse(arr);
    return 0;
}