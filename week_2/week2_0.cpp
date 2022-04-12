#include <stdio.h>

int main(void)
{
    char a = 'A';
    char x = 'X';
    char q = '?';
    char at = '@';
    char seven = 55;
    char u = 85;
    char d = 100;
    char x_low = 120;
    printf("문자 %c의 아스키코드: %d\n", a, a);
    printf("문자 %c의 아스키코드: %d\n", x, x);
    printf("문자 %c의 아스키코드: %d\n", q, q);
    printf("문자 %c의 아스키코드: %d\n", at, at);
    printf("아스키코드 %d에 해당하는 문자는 %c\n", seven, seven);
    printf("아스키코드 %d에 해당하는 문자는 %c\n", u, u);
    printf("아스키코드 %d에 해당하는 문자는 %c\n", d, d);
    printf("아스키코드 %d에 해당하는 문자는 %c\n", x_low, x_low);
}