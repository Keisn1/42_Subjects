#include <stdio.h>
#include <stdlib.h>

void fr_print_alphabet(void) {
    char last_c = 'z';
    for (char c = 'a'; c <= last_c; ++c) {
        putchar(c);
    }
    return;
}

int main() {
    fr_print_alphabet();
    return 0;
}
