#include <stdio.h>

int main(void)
{
    int a=3, b=5, result1;
    float c=1.5, d=2.5, result2;
    printf("a=%d, b=%d, c=%.1f, d=%.1f\n", a, b, c, d);
    // result1을 a+b로 초기화 
    result1 = a+b;
    printf("%d + %d = %d\n", a, b, result1);
    // result1을 a-b로 초기화 
    result1 = a-b;
    printf("%d - %d = %d\n", a, b, result1);
    // result1을 a*b로 초기화 
    result1 = a*b;
    printf("%d * %d = %d\n", a, b, result1);
    // result2를 c/d로 초기화 
    result2 = c / d;
    // 소수점이하 한자릿수까지 출력 
    printf("%.1f / %.1f = %.1f\n", c, d, result2);
}