#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
    return;
}

void putstr(char *str) {
    int index = 0;
    while (str[index] != '\0') {
        ft_putchar(str[index]);
        index++;
    }
}
int main() {
    putstr("Hello World");
    return 0;
}
