#include <unistd.h>

void mx_printchar(char c) {
    write(1, &c, 1);
}

int main() {
    mx_printchar('W');
    mx_printchar('a');
    mx_printchar('k');
    mx_printchar('e');
    mx_printchar(' ');
    mx_printchar('u');
    mx_printchar('p');
    mx_printchar(',');
    mx_printchar(' ');
    mx_printchar('N');
    mx_printchar('E');
    mx_printchar('O');
    mx_printchar(' ');
    mx_printchar('\\');
    mx_printchar(' ');
    mx_printchar('(');
    mx_printchar('^');
    mx_printchar('_');
    mx_printchar('^');
    mx_printchar(')');
    mx_printchar(' ');
    mx_printchar('/');
    mx_printchar('\n');
    return 0;
}
