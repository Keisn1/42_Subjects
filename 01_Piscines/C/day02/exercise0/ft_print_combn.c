#include "unistd.h"
#include <strings.h>

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

/* void increment(int *number, int inc_index) { */
/*     number[inc_index]++; */
/*     if (inc_index == 0) { */
/*         return; */
/*     } else { */
/*         increment(number, inc_index - 1); */
/*         return; */
/*     } */
/* } */

int find_index(int* number, int n, int index) {
    if (index < 0) {
        return -1;
    }
    if (number[index] < 9) {
        return index;
    } else {
        return find_index(number, n, index - 1);
    }
}

void ft_print_combn(int n) {
    if (n > 10 || n < 0) {
        return;
    }

    int number[n];
    for (int i = 0; i < n; i++) { /* initialization */
        number[i] = 0;
    }

    int running = 1;
    int inc_index;
    int first = 1;
    while (running) {
        inc_index = find_index(number, n, n - 1);
        if (inc_index == -1) {
            running = 0;
        } else {
            if (!first) {
                ft_putchar(',');
                ft_putchar(' ');
            }
            first = 0;
            /* increment */
            number[inc_index]++;
            for (int i = inc_index + 1; i < n; i++) { /*  */
                number[i] = 0;
            }
            /* print */
            for (int i = 0; i < n; i++) { /*  */
                ft_putnbr(number[i]);
            }
        }
    }
}

int main() {
    /* int n = 3; */
    /* int index = n - 1; */
    /* int number[3] = {0, 8, 9}; */
    /* int inc_index = find_index(number, n, index); */
    /* ft_putnbr(inc_index); */
    ft_print_combn(3);
    return 0;
}
