#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d,%d",&a,&b);
    int max;
    if(b>a){
        max = b;
    }else{
max=a;
    }
    printf("%d",max);
    return 0;
}