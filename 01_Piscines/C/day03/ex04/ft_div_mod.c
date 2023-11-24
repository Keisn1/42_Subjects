
#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;
}

void ft_ultimate_div_mod(int *a, int *b) {
    int div = *a / *b;
    int mod = *a % *b;
    *a = div;
    *b = mod;
}

int main() {
    int a = 20, b = 14;
    int div, mod;
    ft_div_mod(a, b, &div, &mod);
    printf("div: %d, mod: %d\n", div, mod);

    a = 20, b = 14;
    ft_ultimate_div_mod(&a, &b);
    printf("div: %d, mod: %d\n", a, b);
    return 0;
}
