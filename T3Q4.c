//Enter integer variables a, b, c, d, and e. evaluate the following expressions
#include<stdio.h>
void main(){
    int a,b,c,d,e;
    printf("Enter values for a,b,c,d,e:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float res1 = a+b-c+d;
    float res2 = a*b/c+d;
    float res3 = 1+a*b%c;
    float res4 = a+d%b-c;
    printf("Result:\n");
    printf("a+b-c+d = %f\n",res1);
    printf("a*b/c+d = %f\n",res2);
    printf("1+a*b%%c = %f\n",res3);
    printf("a+d%%b-c = %f",res4);
}
