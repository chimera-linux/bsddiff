#ifndef CDEFS_H
#define CDEFS_H

#define __FBSDID(x)

#define __dead2

void warnc(int code, const char *format, ...);

#ifndef PATH_MAX
#define PATH_MAX 4096
#endif

#ifndef MIN
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#endif

#ifndef MAX
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
#endif

#endif
