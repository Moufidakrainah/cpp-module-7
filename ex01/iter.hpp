#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef> /* pour size_t */

/* Template de fonction iter */
template <typename T, typename Func>
void iter(T* array, const size_t length, Func f)
{
    for (size_t i = 0; i < length; ++i)
        f(array[i]);
}

#endif
