#include <stdio.h>

int ft_iterative_factorial_rec(long long nb) {
    if (nb <= 0) {
        return 0;
    }
    if (nb <= 1) {
        long long int one = 1;
        return one;
    } else {
        return nb * ft_iterative_factorial_rec(nb - 1);
    }
}

int main() {
    long long int nb = 20;
    printf("factorial of %d: %d", 3, ft_iterative_factorial_rec(nb));
    return 0;
}
