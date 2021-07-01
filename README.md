# FreeBSD diff utils

This is `cmp(1)`, `diff(1)`, `sdiff(1)` from FreeBSD, made portable.
The `diff3(1)` utility was taken from OpenBSD, as the FreeBSD version
utilizes hard to replace FreeBSD APIs.

The `-l` flag in `diff` is not implemented. Likewise, `capsicum` support is
not implemented.

The current version matches the FreeBSD 13 release, plus portability changes
(notably reliance on "good" behavior of overlapping with `sprintf`, and others).
