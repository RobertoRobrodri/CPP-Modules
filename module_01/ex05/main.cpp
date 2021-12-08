#include "karen.hpp"

int main(void)
{
	Karen	Charo;

	Charo.complain("DEBUG");
	std::cout << "--------------------------" << std::endl;
	Charo.complain("INFO");
	std::cout << "--------------------------" << std::endl;
	Charo.complain("WARNING");
	std::cout << "--------------------------" << std::endl;
	Charo.complain("ERROR");
	std::cout << "--------------------------" << std::endl;
	return (0);
}