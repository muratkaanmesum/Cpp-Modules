#include "Serializer.hpp"
int main()
{
    Data *d = new Data;
    d->username = "Test";
    d->password = "123";
    Serializer s;
    uintptr_t ptr =  s.serialize(d);
    std::cout << ptr << std::endl;
    Data *newD = s.deserialize(ptr);
    std::cout <<"Username " <<  newD->username  <<" Password " << newD->password  << std::endl;
    delete d;
}