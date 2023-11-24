#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
    return;
}
void increment(int *number, int n, int inc_index) {
    number[inc_index]++;
    for (int i = 1; i < n - inc_index;
         i++) { /* probably need to adjust condition */
        number[inc_index + i] = number[inc_index] + i;
    }
}

int find_inc_index(int *number, int n, int index) {
    int inc_index;
    if (index < 0) {
        return -1;
    } else if (index == n - 1) {
        if (number[index] < 9) {
            return index;
        } else {
            return index - 1;
        }
    } else {
        inc_index = find_inc_index(number, n, index + 1);
        if (inc_index > index) {
            return inc_index;
        } else if ((inc_index ==
                    index) && /* need to add condition for max value */
                   (number[index] < (number[index + 1] - 1))) {
            return index;
        } else {
            return index - 1;
        }
    }
}

void ft_print_combn(int n) {
    if (n > 10 || n <= 0) {
        return;
    }
    int number[n];
    for (int i = 0; i < n; i++) {
        number[i] = 0;
    }

    /* find inc_index */
    int index = 0;
    int inc_index = find_inc_index(number, n, index);
    while (inc_index != -1) {
        /* print */
        for (int i = 0; i < n; i++) {
            ft_putchar(number[i] + '0');
        }
        /* increment */
        increment(number, n, inc_index);
        /* /\* find inc_index *\/ */
        inc_index = find_inc_index(number, n, index);
    }
}

int main() {
    ft_print_combn(2);
    ft_putchar('\n');
    return 0;
}
