#pragma once

#define owlassert(x) ((void)(!(x) && owl_assert_impl(#x, __FILE__, __LINE__)))

bool owl_assert_impl(const char *expr, const char *file, int line);