#include  <stdio.h>

extern "C" {
int  no_underscores(void *dptr);
}

extern "C" {
extern void __with_underscore(void *ptr);
}
