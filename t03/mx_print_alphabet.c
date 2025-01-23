#include "mx_printchar.h"

void mx_print_alphabet(void) {
    for (char c = 'A'; c <= 'Z'; c++) {
        mx_printchar(c);
        mx_printchar(c + 32);
    }
    mx_printchar('\n');
}

int main() {
    mx_print_alphabet();
    return 0;
}
