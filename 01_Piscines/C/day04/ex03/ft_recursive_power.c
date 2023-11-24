#include <stdio.h>
int ft_recursive_power(int nb, int power) {
    if (power < 0) {
        return 0;
    } else if (nb == 0 || power == 0) {
        return 1;
    }

    if (power == 1) {
        return nb;
    }
    return nb * ft_recursive_power(nb, power - 1);
}

int main() {
    int nb = 0;
    int power = -1;
    printf("%d to the power of %d = %d", nb, power,
           ft_recursive_power(nb, power));
    return 0;
}
