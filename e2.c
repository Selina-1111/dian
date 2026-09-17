#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("chcp 65001");
    int a;
    int b;
    scanf("%d,%d",&a,&b);
    double c = (a + b)/2.0;
    printf("%d与%d的平均值是%f",a,b,c);
    return 0;
}