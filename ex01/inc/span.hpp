#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>

class Span{
	private:
		std::vector<int> _vec;
		unsigned int _N;
	public:
		Span(void): _N(5) { _vec.reserve(_N); std::cout << "Span constructor, vector started on 5 items" << std::endl; };
		Span(unsigned int N): _N(N) { _vec.reserve(N); std::cout << "Span constructor, vector started on '" << N << "' items" << std::endl; };
		Span(const Span &copy) { *this = copy; };
		Span &operator=(const Span &copy) { _N = copy._N; _vec = copy._vec; return *this; };
		~Span(void) { std::cout << "Span destructor" << std::endl; };
		int addNumber(unsigned int N);
		int shortestSpan(void);
		int longestSpan(void);
		class NotEnoughtSpace : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

#endif