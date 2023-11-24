#include <stdio.h>
#include <string.h>

char* ft_strstr(char* str, char* to_find) {
    int len_to_find = strlen(to_find);
    int len_str = strlen(str);
    int i = 0;
    while (i < (len_str - len_to_find)) {
        if (!strncmp(&str[i], to_find, len_to_find)) {
            return &str[i];
        }
        i++;
    }
    return NULL;
}

int main() {
    char str1[] = "Hello world!";
    char to_find[] = "H";
    char* str = ft_strstr(str1, to_find);
    printf("%s", str);
    return 0;
}
