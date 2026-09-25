#include<stdio.h>
int main(){
    int i;
    int a;
    int m=0;
    int b;
    for(i=1;i<=20;i++){
        for(b=1;b<=50;b++){
            for(a=1;a<=100;a++){
                if(5*i+2*b+a==100){
                    printf("%d,%d,%d",i,a,b);
                    m=1;
                    break;
                }

            }
            if(m==1){
                break;
            }
        }if(m==1){
            break;
        }
    }
    out:
    return 0;
}