#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

extern char *__progname;

void warnc(int code, const char *format, ...) {
    va_list ap;
    fprintf(stderr, "%s: ", __progname);
    if (format) {
        va_start(ap, format);
        vfprintf(stderr, format, ap);
        va_end(ap);
        fprintf(stderr, ": ");
    }
    fprintf(stderr, "%s\n", strerror(code));
}
