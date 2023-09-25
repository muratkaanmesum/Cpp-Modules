#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <cstring>

class PmergeMe {
private:
    std::vector<int> cont1;
    std::list<int> cont2;
    bool errorFlag;
    void handleSort();
    void handleVector();
public:
    PmergeMe();
    PmergeMe(char **argv);
    PmergeMe(PmergeMe &copy);
    ~PmergeMe();
    PmergeMe &operator=(const PmergeMe &c);

};


#endif
