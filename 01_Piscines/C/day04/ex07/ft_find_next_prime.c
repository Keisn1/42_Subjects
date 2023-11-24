#include <stdio.h>
int ft_find_next_prime(int nb) {
    if (nb < 2) {
        return 2;
    }
    int rem;
    int p = 2;
    while (p <= nb / 2) {
        rem = nb % p;
        if (rem == 0) {
            return ft_find_next_prime(nb + 1);
        }
        p++;
    }
    return nb;
}

int main() {
    for (int nb = 1; nb <= 100; nb++) {
        printf("%d is prime? %d\n", nb, ft_find_next_prime(nb));
    }
    return 0;
}
