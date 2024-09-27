#include "span.hpp"

const char	*Span::NotEnoughtSpace::what() const throw()
{
	return ("Not enought space in the vector");
}

int Span::addNumber(unsigned int N)
{
	try {
		if (_vec.size() < _N)
		{
			_vec.push_back(N);
			std::cout << "Number '" << N << "' added to the vector" << std::endl;
			return 0;
		}
		else
			throw NotEnoughtSpace();
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
}

int Span::shortestSpan(void)
{
    if (_vec.size() < 2) // Asegurarse de que haya al menos dos elementos
        throw std::logic_error("Not enough elements to find a span");

    std::list<int> lst(_vec.begin(), _vec.end());
    lst.sort();

    std::list<int>::iterator it = lst.begin();
    std::list<int>::iterator ite = --lst.end(); // Penúltimo elemento para evitar el último en la comparación
    int min = std::numeric_limits<int>::max(); // Valor inicial muy grande

    for (std::list<int>::iterator next = std::next(it); next != lst.end(); ++it, ++next)
    {
        int diff = std::abs(*next - *it);
        if (diff < min)
            min = diff;
    }
    return min;
}

int Span::longestSpan(void)
{
    if (_vec.size() < 2) // Asegurarse de que haya al menos dos elementos
        throw std::logic_error("Not enough elements to find a span");

    std::list<int> lst(_vec.begin(), _vec.end());
    lst.sort();

    int max = std::abs(lst.back() - lst.front()); // La diferencia más grande será entre el primer y último elemento
    return max;
}

