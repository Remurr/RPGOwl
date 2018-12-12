#include "OwlTools.h"
#include <stdio.h>

bool owl_assert_impl(const char *expr, const char *file, int line)
{
    printf("\n >>> ASSERT: '%s' (at %s:%d) \n", expr, file, line);
    return false;
}