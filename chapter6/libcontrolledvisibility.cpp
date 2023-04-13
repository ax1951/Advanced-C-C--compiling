#include "sharedLibExports2.h"
#include <stdio.h>

#if 1
#define FOR_EXPORT __attribute__ ((visibility("default")))
#else
#define FOR_EXPORT
#endif

void mylocalfunction11(void)
{
    printf("function11\n");
}

void mylocalfunction22(void)
{
    printf("function22\n");
}

void mylocalfunction33(void)
{
    printf("function33\n");
}

void FOR_EXPORT printMessage2(void)
//void printMessage2(void)
{
    printf("Running the function exported from the shared library\n");
}