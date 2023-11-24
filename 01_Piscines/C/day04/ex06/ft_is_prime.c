#include <stdio.h>
int ft_is_prime(int nb) {
    if (nb < 2) {
        return 0;
    }
    int rem;
    int p = 2;
    while (p <= nb / 2) {
        rem = nb % p;
        if (rem == 0) {
            return 0;
        }
        p++;
    }
    return 1;
}
int main() {
    for (int nb = 10000; nb <= 100000; nb++) {
        printf("%d is prime? %d\n", nb, ft_is_prime(nb));
    }
    return 0;
}
