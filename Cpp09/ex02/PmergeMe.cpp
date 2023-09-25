#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(PmergeMe &copy) {

}

PmergeMe::~PmergeMe() {

}

PmergeMe &PmergeMe::operator=(const PmergeMe &c) {
    if(this == &c)
        return *this;
    return  *this;
}

void PmergeMe::handleSort()
{
    if(errorFlag){
        std::cout << "Error" << std::endl;
        return;
    }
    handleVector();
}
PmergeMe::PmergeMe(char **argv) {
    for (int i = 0; argv[i] != NULL; ++i) {
        std::string arg = std::string(argv[i]);
        try{
            int val = std::stoi(arg);
            if (val < 0)
                this->errorFlag = true;
            this->cont1.push_back(val);
            this->cont2.push_back(val);
        }
        catch(std::exception &e)
        {
            errorFlag = true;
        }
    }
    handleSort();
}

void PmergeMe::handleVector() {

}
