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
std::list<int> PmergeMe::handleList(std::list<int> lst)
{
    if(lst.size() <= 1)
            return lst;
    size_t mid = lst.size() / 2;
    std::list<int> leftPart;
    std::list<int> rightPart;
    for (size_t i = 0; i < mid; ++i) {
        leftPart.push_back(lst.front());
        lst.pop_front();
    }
    rightPart = lst;
    leftPart = handleList(leftPart);
    rightPart = handleList(rightPart);
    return mergeList(leftPart,rightPart);
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
    start = std::clock();
    printList(this->cont2);
    std::list<int> resultList = handleList(this->cont2);
    std::cout << "after :";
    printList(resultList);
   time_vector = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC * 1000;
    std::cout << std::endl << "Time to process a range of " << this->cont2.size() << " elements with std::list " << time_vector << " us" << std::endl;

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

std::list<int> PmergeMe::mergeList(std::list<int> left, std::list<int> right) {
    std::list<int> result;
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
