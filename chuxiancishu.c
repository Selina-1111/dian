#include<stdio.h>
int main(){
    const int number = 10;
    int cnt[number];
    int i;
    for(i=0;i<number;i++)
    {
        cnt[i]=0;
    }
    int a;
    scanf("%d",&a);
    while (a!=-1){
        cnt[a]++;
        scanf("%d",&a);
    }
    for(i=0;i<number;i++){
        printf("%d:%d\n",i,cnt[i]);
    }
    return 0;
}