#include "easyfind.hpp"
#include <algorithm>
int main()
{
    std::vector<int> *a = new std::vector<int>();
    for (int i = 0; i < 5; ++i) {
        a->push_back(i);
    }

    std::cout << *::easyfind(a,4) << std::endl;
}