#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
    return;
}

void ft_putnbr(int nb) {
    if (nb == -2147483648) {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0) {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb < 10) {
        ft_putchar(nb + 48);
        return;
    } else
        ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
}

void ft_strlen(char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    ft_putnbr(count);
}

int main() {
    ft_strlen("Hello World");
    return 0;
}
