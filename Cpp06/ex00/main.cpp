#include "ScalarConverter.hpp"

int main(int argc, const char **argv){
    if(argc != 2)
        return 0;
    ScalarConverter c;
    c.setStr(argv[1]);
    c.convert();
    return 1;
}