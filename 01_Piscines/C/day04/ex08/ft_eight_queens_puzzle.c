#include <stdio.h>

void print_queens(int* queens) {
    for (int i = 0; i < 8; i++) {
        printf("%d", queens[i]);
    }
    printf("\n");
}

int check_row(int col, int* queens) {
    for (int i = 0; i < col; i++) {
        if (queens[i] == queens[col]) {
            return 0;
        }
    }
    return 1;
}

int check_diag(int col, int* queens) {
    int row = queens[col];
    int help_row = row - 1;
    int help_col = col - 1;
    while (help_col >= 0 && help_row >= 0) {
        if (queens[help_col] == help_row) {
            return 0;
        }
        help_col--;
        help_row--;
    }

    help_row = row + 1;
    help_col = col - 1;
    while (help_col >= 0 && help_row < 8) {
        if (queens[help_col] == help_row) {
            return 0;
        }
        help_col--;
        help_row++;
    }
    return 1;
}

int find_possibilities(int col, int* queens) {
    int result = 0;
    for (int row = 0; row < 8; row++) {
        queens[col] = row;
        if (!check_row(col, queens)) {
            continue;
        }
        if (check_diag(col, queens)) {
            if (col == 7) {
                print_queens(queens);
                return 1;
            } else {
                result += find_possibilities(col + 1, queens);
            }
        }
    }
    return result;
}

int ft_eight_queens_puzzle() {
    int queens[8] = {0};
    int final = find_possibilities(0, queens);
    return final;
}

int main() {
    int final = ft_eight_queens_puzzle();
    printf("%d", final);
    return 0;
}
