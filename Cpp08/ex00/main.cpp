#include "easyfind.hpp"
#include <algorithm>
int main()
{
    std::vector<int> *a = new std::vector<int>();
    a->push_back(2);
    ::easyfind(a,2);
}