#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("chcp 65001");
    int amount = 0;
    printf("请输入商品价格：");
    int price = 0;
    scanf("%d",&price);
    printf("请输入金额：");
    scanf("%d",&amount);
    int result = amount - price;
    printf("找零：%d",result);
    return 0;
}