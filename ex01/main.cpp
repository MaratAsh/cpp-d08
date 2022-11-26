#include "Span.hpp"

int main() {
    Span sp = Span(5);
	std::cout << "---------- Span(5) ----------" << std::endl;
    try {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    } catch (std::exception & ex) {
        std::cerr << ex.what() << std::endl;
    }


    try {
        for (int i = 0; i < 5; ++i)
            std::cout << sp[i] << " ";
    } catch (std::exception & ex) {
        std::cerr << ex.what() << std::endl;
    }
	std::cout << std::endl << std::endl;

    std::cout << "Short Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Long Span: " << sp.longestSpan() << std::endl;

	std::cout << std::endl << "---------- Span(10000) ----------" << std::endl;
    Span sp2 = Span(10000);

    for (int i = 0; i < 10000; i++)
        sp2.addNumber(i + 1);

    std::cout << "Short Span: " << sp2.shortestSpan() << std::endl;
    std::cout << "Long Span: " << sp2.longestSpan() << std::endl;

	std::cout << std::endl << "---------- Span(10000) with vector ----------" << std::endl;
	Span sp4 = Span(20000);
	std::vector<unsigned int> numbers;

	for (int i = 0; i < 10000; i++)
		numbers.push_back(i + 1);
	sp4.addSequence(numbers.begin(), numbers.end());
	std::cout << "Short Span: " << sp2.shortestSpan() << std::endl;
	std::cout << "Long Span: " << sp2.longestSpan() << std::endl;

	std::cout << std::endl << "---------- Span(1) ----------" << std::endl;
	Span sp3 = Span(1);
    try {
        std::cout << "Short Span: " << sp3.shortestSpan() << std::endl;
    }
    catch (std::exception & ex) {
        std::cerr << ex.what() << std::endl;
    }

    return (0);
}
