#include <stdio.h>
int main(void) 
{
    int num; // num 이라는 이름의 정수를 담을 그릇 만들기 
    num = 1; // 그릇에 1이라는 정수를 담기 
    printf("computer\n");
    printf("num is %d\n", num);
    // %d - 이자리에 콤마뒤의 값(정수, decimal)가 올거임
    // %d vs %i 
    // scanf같은 input 형식 지정자일 때 
    // %d: signed 10진수 정수를 입력받음
    // %i: 10진수/8진수/16진수를 입력받음 
}