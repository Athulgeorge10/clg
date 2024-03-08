//Write a C program to convert temperatures between Celsius and Fahrenheit. Ask the user to choose the conversion type (Celsius to Fahrenheit or Fahrenheit to Celsius) and input the temperature. Use a switch case to perform the conversion and display the result.
#include<stdio.h>
void main(){
    int ch;float cel,far;
    printf("Enter the serial no. for your choice of conversion\n1: Celsius to Farenheit\n2: Farenheit to Celsius\nYour Choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:printf("Enter the temperature in Celsius:");
        scanf("%f",&cel);
        far = cel*1.8+32;
        printf("%0.2f C = %0.2f F",cel,far);
        break;
        case 2:printf("Enter the temperature in Farenheit:");
        scanf("%f",&far);
        cel = (far-32)*0.55556;
        printf("%0.2f F = %0.2f C",far,cel);
        break;
    }
}