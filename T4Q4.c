//Write a program to Find all the roots of a quadratic equation in C. Check for all three conditions.
#include <math.h>
#include <stdio.h>
void main(){
    double a,b,c,dis,root1,root2,r,i;
    printf("Let y = ax^2 + bx + c  be the quadratic equation.\n");
    printf("Enter value of a:");
    scanf("%lf", &a);
    printf("Enter value of b:");
    scanf("%lf", &b);
    printf("Enter value of c:");
    scanf("%lf", &c);

    dis = b*b - 4*a*c;
    if (dis > 0) {
        root1 = (-b+sqrt(dis))/(2*a);
        root2 = (-b-sqrt(dis))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf",root1,root2);
    }
    else if (dis == 0) {
        root1 = root2 = -b/(2*a);
        printf("root1 = root2 = %.2lf;",root1);
    }
    else {
        r = -b/(2*a);
        i = sqrt(-dis)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi",r,i,r,i);
    }
}
