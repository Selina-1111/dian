#include<stdio.h>
int main()
{
    double a;
    double b;
    double c;
    scanf("%lf,%lf",&a,&b);
    c=a;
    a=b;
    b=c;

    printf("%f,%f",a,b);
    return 0;
}