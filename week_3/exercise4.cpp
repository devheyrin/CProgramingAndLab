#include <stdio.h>

int main(void)
{
    char gender;
    int age;
    double assets;
    printf("성별(m/f), 나이, 자산 입력\n");
    scanf("%c%d%lf", &gender, &age, &assets);
    printf("\n<나의 정보>\n");
    printf("성별: %c\n나이: %d\n자산: %.2lf\n", gender, age, assets);
}