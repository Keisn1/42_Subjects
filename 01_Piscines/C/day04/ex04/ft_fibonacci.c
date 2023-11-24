#include <stdio.h>
int ft_fibonacci(int index) {
    if (index == 0) {
        return 0;
    } else if (index < 3) {
        return 1;
    }
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main() {
    int index = 5;
    printf("fibo of %d = %d", index, ft_fibonacci(index));
    return 0;
}
