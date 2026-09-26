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
     char input[20];
     
     while(1){
     scanf("%s",input);
     int situation;
     if(strcmp(input,"exit")==0){
        situation = 3;
     }else if(strcmp(input,"quit")==0){
        situation =3;
     }else if(strcmp(input,"price")==0){
        situation =2;
     }else{
        situation =1;
     }
    switch(situation){
        case 1:
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
            printf("ERROR:code not found\n");
    }
        break;
        case 2:
        for(i=0;i<3;i++){
            printf("%s,%s,%.2f\n",item[i].code,item[i].name,item[i].price);
        }
        break;
        case 3:
        printf("Bye~");
        return 0;
    }
}
    return 0;
}