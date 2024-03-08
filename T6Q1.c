//Create a C program that asks the user to enter a character. If the entered character is a vowel (a, e, i, o, u), print "Vowel". Otherwise, print "Consonant".
#include<stdio.h>
void main(){
    char l;
    printf("Enter a character:");
    scanf("%c",&l);
    switch(l){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("Vowel!");break;
        default: printf("Consonant");break;
    }
}