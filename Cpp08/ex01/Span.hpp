#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span {
private:
    unsigned int len;
    std::vector<int> arr;
public:

    Span();
    Span(unsigned  int n);
    Span(Span &copy);
    ~Span();
    Span &operator=(const Span &c);
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
    void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
     class SpanIsFullException: public std::exception
        {
        public:
            virtual const char * what() const throw();
        };
    class SpanIsEmptyException:public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
};


#endif
