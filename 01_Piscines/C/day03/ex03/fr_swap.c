#include <stdio.h>
void ft_swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main() {
    int a = 12;
    int b = 23;
    ft_swap(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}
