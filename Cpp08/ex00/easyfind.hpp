#ifndef EASYFIND_HPP
#define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T *cont,int val)
{
    typename T::iterator t = std::find(cont->begin(), cont->end(), val);
    if(*t != val)
        throw std::invalid_argument("Container doesn't contain the value");
    return t;
}
#endif
