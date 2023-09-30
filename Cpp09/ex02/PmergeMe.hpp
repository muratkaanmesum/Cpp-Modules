#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <ctime>
class PmergeMe {
private:
    std::vector<int> cont1;
    std::list<int> cont2;
    bool errorFlag;
    void handleSort();
    std::vector<int>  handleVector(std::vector<int> vec);
    std::vector<int> mergeVector(std::vector<int> left, std::vector<int> right);
    std::list<int> handleList(std::list<int> lst);
    std::list<int> mergeList(std::list<int> left, std::list<int> right);
public:
    PmergeMe();
    PmergeMe(char **argv);
    PmergeMe(PmergeMe &copy);
    ~PmergeMe();
    PmergeMe &operator=(const PmergeMe &c);
    void getResult();
};


#endif
