#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
template <class T>
class MutantStack:public std::stack<T> {
public:
    MutantStack();
    MutantStack(MutantStack &copy);
    ~MutantStack();
    MutantStack<T> &operator=(const MutantStack<T> &c);
    typename std::stack<T>::container_type::iterator begin()
    {
        return this->c.begin();
    }
    typename std::stack<T>::container_type::iterator end()
    {
        return this->c.end();
    }
};

template<class T>
MutantStack<T>::MutantStack() {
    std::cout << "MutantStack Created" << std::endl;
}

template<class T>
MutantStack<T>::~MutantStack() {
    std::cout << "MutantStack Destructed" << std::endl;
}
template<class T>
MutantStack<T>::MutantStack(MutantStack &copy) {
    std::cout << "copy constructor called" << std::endl;
    *this = copy;
}
template <class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &c) {
    if (this == &c)
        return *this;
    *this = c;
    return *this;
}
#endif
