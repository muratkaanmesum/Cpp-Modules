#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base *generate(void)
{
    std::srand(time(NULL));
    int rand =std::rand() % 3;
    if(rand == 0) {
        return new A;
    }
    else if(rand == 1) {
        return new B;
    }
    else {
        return new C;
    }
}
void identify(Base* p)
{
    if(dynamic_cast<A*> (p))
        std::cout << "Class is determined as A" << std::endl;
    else if(dynamic_cast<B *>(p))
        std::cout << "Class is determined as B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Class is determined as C" << std::endl;
}
void identify(Base &p)
{
    try
    {
        A&a  = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Class is determined as A by reference" << std::endl;
        return;
    }
    catch(std::exception &e)
    {}
    try
    {
        B&b  = dynamic_cast<B&>(p);
        std::cout << "Class is determined as B by reference" << std::endl;
        (void)b;
        return;
    }
    catch (std::exception &e)
    {}
    try {
        C&c  = dynamic_cast<C&>(p);
        std::cout << "Class is determined as C by reference" << std::endl;
        (void)c;
        return;
    }
    catch(std::exception &e)
    {}


}
int main()
{
Base * b = generate();
    identify(b);
    identify(*b);
}