#include<stdio.h>
int add(int a,int b)
{
    int sum =0;
    for(;a<=b;a++){
        sum+=a;
    }
    return sum;
}
int main(){
    printf("put in two number\n");
    int a;
    int b;
    scanf("%d,%d",&a,&b);
    printf("%d",add(a,b));
    return 0;

}