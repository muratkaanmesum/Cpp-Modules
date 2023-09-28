#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(PmergeMe &copy) {
    this->cont1 = copy.cont1;
    this->cont2 = copy.cont2;
}

PmergeMe::~PmergeMe() {

}

PmergeMe &PmergeMe::operator=(const PmergeMe &c) {
    if(this == &c)
        return *this;
    return  *this;
}
void printVector(std::vector<int> &vector)
{
    for( std::vector<int>::iterator it= vector.begin(); it != vector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}
void printList(std::list<int>list)
{
    for(std::list<int>::iterator it = list.begin();it != list.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}
std::list<int>::iterator operator +(std::list<int>::iterator it, int value)
{
    for(int i = 0;i < value;i++)
        it++;
    return it;
}
void PmergeMe::handleList(std::list<int> lst)
{
    int mid = lst.size() / 2;
    std::list<int> leftPart(lst.begin() +mid);
}
void PmergeMe::handleSort()
{
    if(errorFlag){
        std::cout << "Error" << std::endl;
        return;
    }
    std::cout << "before :";
    printVector(this->cont1);
    std::clock_t start = std::clock();
    std::vector<int> resultVec = handleVector(this->cont1);
    std::cout << "after :";
    printVector(resultVec);
    double time_vector = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC * 1000;
    std::cout << std::endl << "Time to process a range of " << this->cont1.size() << " elements with std::vector " << time_vector << " us" << std::endl;
    std::cout << "before :";
    printList(this->cont2);
    std::clock_t start = std::clock();
    std::vector<int> resultVec = handleList(this->cont2);
    std::cout << "after :";
}

PmergeMe::PmergeMe(char **argv) {
    this->errorFlag = false;
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
}

std::vector<int> PmergeMe::handleVector(std::vector<int> vec) {
    if(vec.size() <= 1)
            return vec;
    int mid = vec.size() / 2;
    std::vector<int> leftPart(vec.begin(), vec.begin() + mid);
    std::vector<int> rightPart(vec.begin() + mid , vec.end());
    leftPart = handleVector(leftPart);
    rightPart = handleVector(rightPart);
    return mergeVector(leftPart,rightPart);
}

void PmergeMe::getResult() {
    handleSort();
}

std::vector<int> PmergeMe::mergeVector(std::vector<int> left, std::vector<int> right) {
    std::vector<int> result;
    while (!left.empty() && !right.empty())
    {
        if (left.front() <= right.front())
        {
            result.push_back(left.front());
            left.erase(left.begin());
        }
        else
        {
            result.push_back(right.front());
            right.erase(right.begin());
        }
    }
    while (!left.empty())
    {
        result.push_back(left.front());
        left.erase(left.begin());
    }
    while (!right.empty())
    {
        result.push_back(right.front());
        right.erase(right.begin());
    }
    return result;
}
