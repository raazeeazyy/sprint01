#include <unistd.h>
#include "mx_printstr.h"
#include "mx_strlen.h"

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}
