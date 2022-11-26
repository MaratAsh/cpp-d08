#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class Span {
private:
    unsigned int        N;
    std::vector<int>    data;
    Span();
public:
    Span(unsigned int n);
    ~Span();
    Span(const Span & copy);
    Span & operator=(const Span & copy);

    int & operator[](unsigned int index);

    void addNumber(unsigned int num);

    void addSequence(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    class	SpanException : public std::exception {
    private:
        std::string _msg;
    public:
        SpanException(std::string msg);
        virtual ~SpanException() throw ();
        virtual const char* what() const throw();
    };
};

#endif
