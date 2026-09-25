#include<stdio.h>
int main(){
    int i;
    int a;
    int b;
    for(i=1;i<=20;i++){
        for(b=1;b<=50;b++){
            for(a=1;a<=100;a++){
                if(5*i+2*b+a==100){
                    printf("%d,%d,%d",i,a,b);
                    goto out;
                }
            }
        }
    }
    out:
    return 0;
}