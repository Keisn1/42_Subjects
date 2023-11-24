#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strcmp(char* s1, char* s2) {
    int i = 0;
    int res = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && res == 0) {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return res;
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return res;
    } else if (s2[i] == 0) {
        return 1;
    } else {
        return -1;
    }
}

int ft_strncmp(char* s1, char* s2, unsigned int n) {
    unsigned int i = 0;
    int res = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && res == 0 && i < n) {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return res;
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return res;
    } else if (s2[i] == '\0') {
        return 1;
    } else {
        return -1;
    }
}

int main(int argc, char* argv[]) {
    int res;
    if (argc < 3) {
        fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", argv[1]);
    if (argc == 3)
        res = ft_strcmp(argv[1], argv[2]);
    else
        res = strncmp(argv[1], argv[2], atoi(argv[3]));

    if (res == 0) {
        printf("<str1> and <str2> are equal");
        if (argc > 3)
            printf(" in the first %d bytes\n", atoi(argv[3]));
        printf("\n");
    } else if (res < 0) {
        printf("<str1> is less than <str2> (%d)\n", res);
    } else {
        printf("<str1> is greater than <str2> (%d)\n", res);
    }

    exit(EXIT_SUCCESS);
}
