#include <stdio.h>

int main(void)
{
  int num;

  printf("정수 입력 : ");
  scanf("%d", &num);
  
  // if 문 
  if (num % 2 == 0) 
    printf("입력된 %d은(는) 짝수입니다.", num);
  else if (num % 2 == 1) 
    printf("입력된 %d은(는) 홀수입니다.", num);
  else 
    printf("입력된 값은 %d입니다.", num);


  // switch 문 
  switch (num % 2)
  {
  case 0:
    printf("입력된 %d은(는) 짝수입니다.", num);
    break;
  case 1:
    printf("입력된 %d은(는) 홀수입니다.", num);
    break;
  default:
    printf("입력된 값은 %d입니다.", num);
    break;
  } 
}