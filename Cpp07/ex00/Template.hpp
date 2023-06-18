#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>

template<typename T>
void swap(T &x, T &y) {
    std::swap(x,y);
}
template<typename T>
T min(T &x, T &y) {
    return y <= x  ? y : x;
}
template<typename T>
T max(T &x, T &y) {
    return y >= x  ? y : x;
}



#endif //TEMPLATE_HPP
