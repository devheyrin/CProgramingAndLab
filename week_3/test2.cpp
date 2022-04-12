#include <stdio.h>

int main(void)
{
    float a = 1.6;
    float b = 1.7;
    int micea, miceb;
    micea = a + b;
    miceb = (int)a + (int)b;
    printf("micea: %d, miceb: %d\n", micea, miceb);
    int kor = 95;
    int math = 100;
    int eng = 80;
    printf("avg: %f\n", (float)(kor+math+eng) / 3);
}