#include <stdio.h>
#include <stdlib.h>
int check_numeric(char c) {
    if ((48 <= c) && (c < 59)) {
        return 1;
    }
    return 0;
}

int ft_atoi(char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }

    int index = count - 1;
    int result = 0;
    int power = 1;
    while (index >= 0) {

        if (check_numeric(str[index])) {
            result += (str[index] - 48) * power;
            power *= 10;
        } else if ((index == 0) && (str[index] == '-')) {
            result *= -1;
        } else {
            return 0;
        }
        index--;
    }
    return result;
}

int main() {
    char *str = "-00";
    int a = ft_atoi(str);
    int b = atoi(str);
    printf("%d\n", a);
    printf("%d", b);
    return 0;
}
