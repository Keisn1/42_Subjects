#include <stdio.h>
int ft_recursive_power(int nb, int power) {
    if (power < 0) {
        return 0;
    } else if (nb == 0 || power == 0) {
        return 1;
    }
    int res = 1;
    while (power > 0) {
        res *= nb;
        power--;
    }
    return res;
}

int main() {
    int nb = -2;
    int power = 3;
    printf("%d to the power of %d = %d", nb, power,
           ft_recursive_power(nb, power));
    return 0;
}
