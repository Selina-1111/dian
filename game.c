#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int c = rand();
    int a =c%100;
    int b;
    int count = 0;
    printf("you can guess");
    do{
        scanf("%d",&b);
        count ++;
        if(b>a){
            printf("you guess big");
        }
        else if(b<a){
            printf("you guess small");
        }
        else if(b==a){
            printf("right");
        }
    }while(b!=a);
    return 0;
}