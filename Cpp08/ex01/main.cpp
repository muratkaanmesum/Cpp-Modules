#include "Span.hpp"

int main() {
    {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        std::vector<int> numbers(10000);
        for (int i = 0; i < 10000; ++i) numbers[i] = i;
        try
        {
            Span s(10000);
            s.addRange(numbers.begin(), numbers.end());
            std::cout << "shortest span: " << s.shortestSpan() << std::endl;
            std::cout << "longest span : " << s.longestSpan() << std::endl;
        }

        catch (std::exception& e)
        {
            std::cerr << "EXCEPTION: " << e.what() << std::endl;
        }
    }

    return 0;
}