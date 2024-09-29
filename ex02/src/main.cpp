#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "- - - - - - - - - - - - - -" << std::endl;
	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;
	std::string empty = mstack.empty() ? "Yes" : "No";
	std::cout << "empty: " << empty << std::endl;
	std::cout << "- - - - - - - - - - - - - -" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	int i = mstack.size();
	while (i)
	{
		--i;
		std::cout << "[ " << i + 1 << " ]: " << it[i] << std::endl;
	}
	std::cout << "- - - - - - - - - - - - - -" << std::endl;

	return 0;
}