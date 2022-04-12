#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("정수 세 개를 입력하세요.\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("입력된 세 개의 정수: %d, %d, %d\n", a, b, c);
    printf("세 정수의 합계: %d\n", a+b+c);
    printf("세 정수의 평균: %.2f\n", (float)(a+b+c) / 3);
}