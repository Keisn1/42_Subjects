#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void ft_putchar(char c) { write(1, &c, 1); }

void ft_print_reverse_alphabet(void) {
    for (char c = 'z'; c >= 'a'; c--) {
        ft_putchar(c);
    }
    ft_putchar('\n');
    return;
}

void ft_print_numbers(void) {
    for (char x = '0'; x <= 57; ++x) {
        ft_putchar(x);
    }
    ft_putchar('\n');
    return;
}

void ft_is_negative(int n) {
    if (n < 0) {
        ft_putchar('N');
    } else {
        ft_putchar('P');
    }
    ft_putchar('\n');
    return;
}

void ft_print_comb(void) {
    for (int x = 0; x < 8; x++) {
        for (int y = x + 1; y < 9; y++) {
            for (int z = y + 1; z < 10; z++) {
                ft_putchar(' ');
                ft_putchar(x + 48);
                ft_putchar(y + 48);
                ft_putchar(z + 48);
                if (!(x == 7 && y == 8 && z == 9))
                    ft_putchar(',');
            }
        }
    }
    ft_putchar('\n');
    return;
}

void ft_print_comb2(void) {
    int p = 0;
    for (int x1 = 0; x1 < 3; x1++) {
        for (int y1 = 0; y1 < 3; y1++) {
            for (int x2 = 0; x2 < 3; x2++) {
                for (int y2 = 0; y2 < 3; y2++) {
                    if ((x2 > x1)) {
                        p = 1;
                    } else if ((x2 == x1 && y1 < y2)) {
                        p = 1;
                    } else {
                        p = 0;
                    }
                    if (p) {
                        ft_putchar(x1 + 48);
                        ft_putchar(y1 + 48);
                        ft_putchar(' ');
                        ft_putchar(x2 + 48);
                        ft_putchar(y2 + 48);
                        ft_putchar('\n');
                    }
                }
            }
        }
    }

    ft_putchar('\n');
    return;
}

int main() {
    /* ft_print_reverse_alphabet(); */
    /* ft_print_numbers(); */
    /* ft_is_negative(0); */
    /* ft_print_comb(); */
    ft_print_comb2();
    return 0;
}
