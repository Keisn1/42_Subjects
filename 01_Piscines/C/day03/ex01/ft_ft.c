#include <stdio.h>
void ft_ft(int* nbr) {
    printf("%d\n", *nbr);
    *nbr = 42;
    printf("%d\n", *nbr);
}

int main() {
    int nbr = 21;
    ft_ft(&nbr);
    return 0;
}
