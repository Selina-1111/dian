#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("chcp 65001");
    double a;
    double b;
    scanf("%lf,%lf",&a,&b);
    double c = (a + b)/2;
    printf("%f与%f的平均值是%f",a,b,c);
    return 0;
}