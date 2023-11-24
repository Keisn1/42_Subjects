#include "unistd.h"

void ft_putchar(char c) {
    write(1, &c, 1);
    return;
}

void ft_putnbr(int nb) {
    int negative = 0;
    if (nb < 0) {
        negative = 1;
        nb *= -1;
    }
    if (nb < 10) {
        if (negative) {
            ft_putchar('-');
        }
        ft_putchar(nb + 48);
        return;
    }

    char number[10];
    int count = 1;
    int rem;
    while (nb > 0) {
        rem = nb % 10;
        number[10 - count] = rem + 48;
        nb = nb / 10;
        count++;
    }

    if (negative) {
        ft_putchar('-');
    }

    for (int i = 0; i < 10; i++) {
        ft_putchar(number[i]);
    }
    return;
}

int main() {
    ft_putnbr(2);
    ft_putchar('\n');
    return 0;
}
