#include <stdio.h>

char* ft_strncpy(char* dest, char* src, unsigned int sz) {
    unsigned int i = 0;

    while (src[i] != '\0' && i < sz) {
        dest[i] = src[i];
        i++;
    }
    while (i < sz) {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main() {
    char str[] = "world";
    char dest[] = "hello";
    ft_strncpy(dest, str, 3);
    printf("%s", dest);
    return 0;
}
