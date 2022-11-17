#include <stdio.h>

int main(void)
{
  int mon;
  printf("Choose the month you like\n");
  scanf("%d", &mon);

  switch (mon)
  {
  case 3:
  case 4:
  case 5:
    printf("You like Spring\n");
    break;

  case 6:
  case 7:
  case 8:
    printf("You like Summer\n");
    break;

  case 9:
  case 10:
  case 11:
    printf("You like Fall\n");
    break;

  case 12:
  case 1:
  case 2:
    printf("You like Winter\n");
    break;

  default:
    printf("Wrong Input\n");
    break;
  }
}