#include "Serializer.hpp"

Serializer::Serializer(Serializer &copy) {
    *this = copy;
}

Serializer::Serializer() {
    std::cout << "Serializer created! "<< std::endl;
}

Serializer::~Serializer() {
    std::cout << "Serializer destroyed! "<< std::endl;

}

Serializer &Serializer::operator=(const Serializer &c) {
    if(this == &c)
            return *this;
    *this = c;
    return *this;
}

uintptr_t Serializer::serialize(Data *ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}


