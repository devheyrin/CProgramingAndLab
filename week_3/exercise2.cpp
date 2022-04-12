#include <stdio.h>

int main(void)
{
    int m, n;
    printf("정수를 입력하세요\n");
    scanf("%d", &m);
    printf("++m : %d\n", ++m);
    printf("m++ : %d\n", m++);
    printf("m은 현재 : %d\n", m);
    printf("정수를 입력하세요\n");
    scanf("%d", &n);
    printf("--n : %d\n", --n);
    printf("n-- : %d\n", n--);
    printf("n은 현재 : %d\n", n);

    int x = 5, y = 3;
    printf("x=%d, y=%d\n", x, y);
    printf("x*y++=%d\n", x*y++);
    printf("x=%d, y=%d\n", x, y);
}
