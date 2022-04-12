#include <stdio.h>

int main(void)
{
    int money;
    int coin500;
    int coin100;
    int coin50;
    int coin10;
    printf("금액입력(10~10000) ");
    scanf("%d", &money);
    printf("금액은 %d원 입니다.", money);
    printf("\n<동전개수>\n");
    coin500 = money / 500;
    coin100 = (money -= coin500*500) / 100;
    coin50 = (money -= coin100*100) / 50;
    coin10 = (money -= coin50*50) / 10;
    printf("500원: %d개\n", coin500);
    printf("100원: %d개\n", coin100);
    printf("50원: %d개\n", coin50);
    printf("10원: %d개\n", coin10);
    printf("최소 동전의 개수 : %d개\n", coin500+coin100+coin50+coin10);
}