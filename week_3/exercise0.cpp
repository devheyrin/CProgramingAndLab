#include <stdio.h>

int main(void)
{
    int cheeta, tarzan, jane;
    cheeta = tarzan = jane = 68;
    printf("%d, %d, %d\n", cheeta, tarzan, jane);
    float a = 11/2; // 연산 결과를 a에 대입할 때 형변환 일어남
    printf("a = %f\n", a);
    // printf("a = %f\n", 11/2); 
    // 정수인 연산 결과를 float 로 출력할 수 없어 컴파일 에러가 발생한다. 
    printf("a = %f\n", 11.0/2);
}