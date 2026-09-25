#include<stdio.h>
int main(){
    printf("please put in a number");
    int a;
    scanf("%d",&a);
    int i;
    int m;
    int count =0;
    for (i=2;i<=a;i++)
    {
        for(m=2;m<i;m++)
        {
            if(i%m==0){
               break ;
            }
        }
        if(m==i){
            printf("%d",i);
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

