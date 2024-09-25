#include "easyfind.tpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " value (1 - 6)" << std::endl;
		return 1;
	}
	std::vector<int> vec;
	vec.push_back(10); vec.push_back(20); vec.push_back(30); vec.push_back(40); vec.push_back(50);
	try {
		std::vector<int>::iterator it = easyfind(vec, std::atoi(argv[1]));
		std::cout << "Element found: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}