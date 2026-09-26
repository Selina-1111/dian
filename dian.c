#include<stdio.h>
#include<string.h>
struct goods{
    char code[20];
    char name[20];
    double price;
};
int main(){
    struct  goods item[3]={
        {"001","cola",3.50},
        {"002","lollipop",0.50},
        {"003","noodles",6.00},
    };
    printf("please input the code:\n" );
    char input[20];
    scanf("%s",input);
    int i;
    int signal=0;
    for(i=0;i<3;i++){
        if(strcmp(input,item[i].code)==0){
            printf("%s,%.2f\n",item[i].name,item[i].price);
            signal =1;
            break;
        }
    }
    if(signal==0){
        printf("not found");
    }
    return 0;
}