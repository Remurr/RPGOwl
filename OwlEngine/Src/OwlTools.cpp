#include "OwlTools.h"

bool assert_impl(bool val, const char *file, int line)
{
    printf("\n >>> ASSERT: <%s> (%d) \n", file, line);
    return false;
}