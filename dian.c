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
    int i;
    for(i=0;i<3;i++){
        printf("%s,%s,%.2f\n",item[i].code,item[i].name,item[i].price);
    }
    return 0;
}