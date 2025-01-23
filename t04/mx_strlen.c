#include <stdio.h>

int mx_strlen(const char *s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const char *str = "Hello World";
    int length = mx_strlen(str);
    printf("Length of string: %d\n", length);
    return 0;
}
