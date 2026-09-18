#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d,%d",&a,&b);
    int max = a;
    if(b>a){
        max = b;
    }
    printf("%d",max);
    return 0;
}