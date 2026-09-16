#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("chcp 65001");
    printf("请输入商品价格：");
    int price = 0;
    scanf("%d",&price);
    int result = 100 - price;
    printf("找零：%d",result);
    return 0;
}