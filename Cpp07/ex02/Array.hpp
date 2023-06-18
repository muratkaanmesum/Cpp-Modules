#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>
#include <cstdlib>

template<class T>
class Array {
private:
    T *arr;
    unsigned int len;
public:
    Array();
    Array(unsigned  int n);
    Array(Array &copy);
    ~Array();
    Array &operator=(const Array &cpy);
    T &operator[](unsigned  int index);
    unsigned int size();
    //class OutOfRange: std::exception
    //{
        //virtual const char* what() const throw()
      //  {
        //    return "Index is out of Range";
      //  }
    //};

};

template<class T>
T &Array<T>::operator[](unsigned int index) {
    if(index >= this->len)
        throw std::out_of_range("Index out of range");
    else
        return this->arr[index];
}

template<class T>
unsigned int Array<T>::size() {
    return this->len;
}

template<class T>
Array<T> &Array<T>::operator=(const Array &cpy)
{
    this->len = cpy.len;
    this->arr = new T[len];
    for(unsigned int i = 0;i<len;i++)
        this->arr[i] = cpy.arr[i];
    return (*this);
}

template<class T>
Array<T>::~Array() {
    std::cout << "Array Destructed" << std::endl;
}

template<class T>
Array<T>::Array(Array &copy) {
    this->arr = new T[copy.len];
    this->len = copy.len;
    for(unsigned int i = 0;i < this->len; i++)
        this->arr[i] = copy.arr[i];
}

template<class T>
Array<T>::Array(unsigned int n) {
    this->arr = new T[n];
    this->len = n;
    for(unsigned int i =0;i < n; i++)
        arr[i] = 0;
}

template<class T>
Array<T>::Array()
{
    arr = new T[1]();
    arr[0] = 0;
    len = 1;
}


#endif //ARRAY_HPP
