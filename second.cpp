#include <stdio.h>
int main(void)
{
    int int_num;
    char letter;
    float real_num;
    int_num = 1;
    letter = 'A'; // char 타입은 무조건 작은따옴표로 감싸기, 큰따옴표 안됨 
    real_num = 3.15;
    printf("정수는 %d\n", int_num);
    printf("문자는 %c\n", letter);
    printf("실수는 %f\n", real_num); // 기본값이 소수점 이하 여섯자리까지 출력 
    printf("실수는 %.1f\n", real_num); // 소수점이하 자릿수를 2자리로 제한+반올림된다!
}