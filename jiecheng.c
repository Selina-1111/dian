#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int answer = 1;
    for(;a>=1;a--)
    {
        answer*=a;

    }
    printf("%d",answer);
}