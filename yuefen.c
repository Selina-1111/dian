#include<stdio.h>
int main(){
    char a[3][10]={"january","februrary","march"};
    int b;
    scanf("%d",&b);
    printf("%s",a[b-1]);
}