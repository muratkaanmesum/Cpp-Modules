#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
typedef struct s_Data
{
    std::string username;
    std::string password;
}Data;
class Serializer {
public:
    Serializer();
    Serializer(Serializer &copy);
    ~Serializer();
    Serializer &operator=(const Serializer &c);
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};


#endif //SERIALIZER_HPP
