#include "span.hpp"

int main (void)
{
	Span span;
	std::srand(42); // Seed set to 42
	for (int i = 0; i < 10; i++){
		std::cout << "[ " << i + 1 << " ] ";
		if (span.addNumber(std::rand() % 100)){
			break;
		}
	}
	std::cout << "- - - - - - - - - - - - - - -" << std::endl;
	std::cout << "Parametric constructor test" << std::endl;
	Span span2(10000);
	for (int i = 0; i < 11; i++){
		std::cout << "[ " << i + 1 << " ] ";
		if (span2.addNumber(std::rand() % 100)){
			break;
		}
	}
	std::cout << "- - - - - - - - - - - - - - -" << std::endl;
	std::cout << "Max Span: " << span.longestSpan() << std::endl;
	std::cout << "Min Span: " << span.shortestSpan() << std::endl;
	std::cout << "- - - - - - - - - - - - - - -" << std::endl;
	std::cout << "Max Span2: " << span2.longestSpan() << std::endl;
	std::cout << "Min Span2: " << span2.shortestSpan() << std::endl;

	return 0;
}