#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
template<typename T>
void easyfind(T *cont,int val)
{
    for (size_t i = 0; i < cont->size(); ++i) {
        std::cout << (*cont)[i] << " ";
    }
    (void)(val);
}
#endif
