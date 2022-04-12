#include <stdio.h>

int main(void)
{
    float grade;
    double grade_d;
    scanf("%f %lf", &grade, &grade_d);
    printf("grade = %.1f, grage_d = %.1f\n", grade, grade_d);
}