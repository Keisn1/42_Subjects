
#include <stdio.h>

void ft_ultimate_ft(int *********nbr) { *********nbr = 42; }

int main() {
  int nbr = 21;
  int *p1 = &nbr;
  int **p2 = &p1;
  int ***p3 = &p2;
  int ****p4 = &p3;
  int *****p5 = &p4;
  int ******p6 = &p5;
  int *******p7 = &p6;
  int ********p8 = &p7;
  int *********p9 = &p8;

  printf("Before: %d\n", nbr);
  ft_ultimate_ft(p9);
  printf("After: %d\n", nbr);
  return 0;
}
