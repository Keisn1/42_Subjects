
#include <stdio.h>
char *ft_strrev(char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    char temp[count];
    for (int i = 0; i < count; i++) {
        temp[i] = str[count - 1 - i];
    }
    str = temp;
    return str;
}

int main() {
    char *str = "Hello";
    char *rev = ft_strrev(str);
    printf("%s", rev);
    return 0;
}
