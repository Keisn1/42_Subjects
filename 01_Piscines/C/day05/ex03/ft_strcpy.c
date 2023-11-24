#include <stdio.h>

int ft_strlen(char* str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

char* ft_strcpy(char* dest, char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main() {
    char* src = "That's my new string";
    char dest[100];
    ft_strcpy(dest, src);
    printf("%s", dest);
    return 0;
}
