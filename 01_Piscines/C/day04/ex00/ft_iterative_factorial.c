#include <stdio.h>
int ft_iterative_factorial_rec(int nb) {
    if (nb <= 0) {
        return 0;
    }
    if (nb == 1) {
        return 1;
    } else {
        return nb * ft_iterative_factorial_rec(nb - 1);
    }
}
int ft_iterative_factorial(int nb) {
    int result = 1;
    if (nb < 0) {
        return 0;
    } else if (nb <= 1) {
        return 1;
    }
    while (nb > 1) {
        result *= nb--;
    }
    return result;
}

int main() {
    printf("factorial of %d: %d", 3, ft_iterative_factorial(-1));
    return 0;
}
