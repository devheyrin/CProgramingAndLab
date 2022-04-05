#include <stdio.h>

int main(void)
{
    float a = 3.14159;
    printf("a: %f\na: %.2f\n", a, a);
    a = 0.123456700; //유효숫자 중 7번째숫자까지 제대로 출력되고, 나머지는 쓰레기값으로 채워진다. 
    printf("a: %.9f\n", a);
    a = 9876.54321; // 유효숫자 중 6번째숫자까지 제대로 출력되고, 나머지는 쓰레기값으로 채워진다. 
    printf("a: %.9f\n", a);
    a = 32000.0;
    printf("a: %f\na: %e\na: %E\n", a, a, a);
    a = 321e-4;
    printf("a: %f\n", a);
    printf("a: %e\n", a);
    printf("a: %.2e\n", a);
}