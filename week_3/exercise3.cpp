#include <stdio.h>

int main(void)
{
    int x;
    double y;
    x = -(2+5)*6+(4+3*(2+3));
    printf("x=%5d\n", x); // 5자리로 맞추어 출력한다. 
    y = 3+2*(x=7/2);
    printf("x=%5d, y=%5.2f\n", x, y);
    x = (int)3.8 + 3.3;
    printf("x=%5d\n", x);
    x = 3/5*22.0;
    printf("x=%5d\n", x);
    y = (double)(x=4)*3/5;
    printf("y=%5.2f\n", y); 
    // 소수점 포함해 5자리로 맞추어 출력한다. 그러나 출력해야 할 숫자가 5자리를 넘어가면 5는 무시한다. 
    y = x*3/5;
    printf("y=%5.3f\n", y);
}