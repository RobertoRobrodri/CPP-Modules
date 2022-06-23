#include "easyfind.hpp"

int main (void)
{
	std::vector<int> v;
	for (int i = 0; i < 100; i++) {
		v.push_back(i);
	};
	std::cout << easyfind<std::vector<int> >(v, 100) << std::endl;
}