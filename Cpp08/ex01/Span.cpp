#include "Span.hpp"

Span::Span() {
    std::cout << "Span Created" << std::endl;
}

Span::Span(unsigned int n) {
    this->len = n;
    std::cout << "Span Created" << std::endl;
}

Span::Span(Span &copy) {
    *this = copy;
}

Span &Span::operator=(const Span &c) {
    if(this == &c)
        return *this;
    this->arr = std::vector<int>(c.arr);
    this->len = c.len;
    return *this;
}

Span::~Span() {
    std::cout << "Span Destructed" << std::endl;
}

void Span::addNumber(int number) {
    if(arr.size() ==this->len)
        throw SpanIsFullException();
    this->arr.push_back(number);
}

int Span::longestSpan() {
    if(this->arr.empty())
        throw SpanIsEmptyException();
    if(this->arr.size() <= 1)
        throw std::invalid_argument("Span has less than 2 numbers");
    int smallest = *std::min_element(this->arr.begin(),this->arr.end());
     int biggest = *std::max_element(this->arr.begin(),this->arr.end());
     return biggest - smallest;
}
int Span::shortestSpan() {
    if(this->arr.empty())
        throw SpanIsEmptyException();
    if(this->arr.size() <= 1)
        throw std::invalid_argument("Span has less than 2 numbers");
    int smallestDistance = std::numeric_limits<int>::max();

    for (size_t i = 0; i < this->arr.size(); ++i) {
        for (size_t j = i + 1; j < this->arr.size(); ++j) {
            int distance = std::abs(this->arr[i] - this->arr[j]);
            if (distance < smallestDistance) {
                smallestDistance = distance;
            }
        }
    }
    return smallestDistance;
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if(this->arr.size() + std::distance(begin,end) >this->len)
        throw SpanIsFullException();
    this->arr.insert(this->arr.end(),begin,end);
}

const char *Span::SpanIsFullException::what() const throw() {
    return "Span is Full";
}

const char *Span::SpanIsEmptyException::what() const throw() {
    return "Span is Empty";
}
