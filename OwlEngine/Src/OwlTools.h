#pragma once

#include <stdio.h>

#define myassert(x) ((void)(!(x) && assert_impl(#x, __FILE__, __LINE__)))

bool assert_impl(bool val, const char *file, int line);