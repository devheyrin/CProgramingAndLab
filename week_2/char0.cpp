#include <stdio.h>

int main(void)
{
    char ch = 'A';
    printf("ch의 값: %c\t ch의 아스키코드: %d\n", ch, ch);
    ch = 98;
    printf("ch의 값: %c\t ch의 아스키코드: %d\n", ch, ch);
    printf("ch의 바로 다음 값: %c\t ch의 바로 다음 아스키코드: %d\n", ch+1, ch+1);
    char ch2 = ch+3;
    printf("ch로부터 세번째 뒤의 값: %c\n", ch2);
}