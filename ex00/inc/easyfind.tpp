#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it == n)
			return it;
	}
	throw ElementNotFoundException();
}//En este ejercicio utilizo typename para indicar que el tipo de dato que se va a utilizar es un tipo de dato que se va a definir en tiempo de compilación.
//En este caso, el tipo de dato es un iterador de la clase T.