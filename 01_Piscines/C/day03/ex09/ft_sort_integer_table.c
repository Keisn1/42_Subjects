#include <stdio.h>
void swap(int* tab, int p1, int p2) {
    int tmp = tab[p1];
    tab[p1] = tab[p2];
    tab[p2] = tmp;
}

void ft_sort_integer_table(int* tab, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (tab[j] < tab[min]) {
                min = j;
            }
        }
        swap(tab, i, min);
    }
    for (int i = 0; i < size; i++) {
        printf("%d, ", tab[i]);
    }
}

int main() {
    /* int size = 10; */
    /* int tab[10] = {12, 3, 4, 5, 7, 2, 1, 6, -1, -45}; */
    /* int tab[10] = { */
    /*     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, */
    /* }; */
    int size = 0;
    int tab[0] = {};
    ft_sort_integer_table(tab, size);
    return 0;
}
