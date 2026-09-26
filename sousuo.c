#include<stdio.h>
int search(int a,int b[],int c);
int main(){
    int number[]={3,5,2,4,6,334,34,64,56,23};
    int a;
    scanf("%d",&a);
    if(search(a,number,sizeof(number)/sizeof(number[0]))!=-1){
        printf("it is in %d",search(a,number,sizeof(number)/sizeof(number[0])));
    }else{
        printf("not found");
    }
    return 0;
}
int search(int a,int b[],int c)
{
    int i;
    for(i=0;i<c;i++){
        if(b[i]==a){
            return i;

        }
        
    }
    return -1;
}