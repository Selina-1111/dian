#include<stdio.h>
int main(){
    int ch;//getchar的逻辑是拿到字符转为ascii码，是数字
    while((ch=getchar())!=EOF){
        putchar(ch);//while循环让它不断地一个一个字符往外吐
    }
    return 0;
}//没有回车垃圾？因为每一次putchar都顺势回车了