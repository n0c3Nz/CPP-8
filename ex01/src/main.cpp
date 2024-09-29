#include "span.hpp"


int main (void)
{
    Span span;
	int arr[] = {1, 2, 3, 4, 5};
	std::list<int> lst(arr, arr + sizeof(arr) / sizeof(int));  // Inicializa la lista desde el array
	span.addNumbers(lst.begin(), lst.end());

	std::cout << "- - - - - - - - - - - - - - -" << std::endl << "Expected error: ";
	span.addNumber(42);
    
    std::cout << "- - - - - - - - - - - - - - -" << std::endl;
    std::cout << "Parametric constructor test" << std::endl;
    
    Span span2(10000);
	span2.addNumbers(lst.begin(), lst.end());
    std::cout << "- - - - - - - - - - - - - - -" << std::endl;
    std::cout << "Max Span: " << span.longestSpan() << std::endl;
    std::cout << "Min Span: " << span.shortestSpan() << std::endl;
    
    std::cout << "- - - - - - - - - - - - - - -" << std::endl;
    std::cout << "Max Span2: " << span2.longestSpan() << std::endl;
    std::cout << "Min Span2: " << span2.shortestSpan() << std::endl;

    return 0;
}
