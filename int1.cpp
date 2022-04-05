#include <stdio.h>

int main(void)
{
    int hogs = 21;
    int cows = 32, goats = 14;
    // int dogs, cats = 94;
    // dogs 를 초기화하지 않았기 때문에 쓰레기값이 출력된다. 
    int dogs = 20, cats = 94;
    printf("cows: %d\t goats: %d\n", cows, goats);
    printf("dogs: %d\t cats: %d\n", dogs, cats);
}