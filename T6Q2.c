//Create a C program that prompts the user to enter a month number (1 to 12) and displays the number of days in that month. Consider a non-leap year.
#include<stdio.h>
void main(){
    int mn;
    printf("Enter a month number:");
    scanf("%d",&mn);
    switch(mn){
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:printf("31 days!");break;
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:printf("30 days!");break;
        case 2:printf("28 days!");break;
        default:printf("Invalid month number!");break;
    }
}