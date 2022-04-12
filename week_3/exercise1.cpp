#include <stdio.h>

int main(void)
{
    int divider, remainder;
    printf("정수 나눗셈: 7/4 = %d\n", 7/4);
    printf("실수 나눗셈: 7.0/4.0 = %.2f\n", 7.0/4.0);
    printf("실수/정수 나눗셈: 7.0/4 = %.2f\n", 7.0/4);
    divider = 13/5;
    remainder = 13%5;
    printf("13/5의 몫: %d\n", divider);
    printf("13/5의 나머지: %d\n", remainder);
}