#include "span.hpp"

int main ( void )
{
	span void_spanner;
	span spanner( 5 );

//	void_spanner.addNumber(1);
//	std::cout << "---------------------" << std::endl;
//	std::cout << spanner.shortestSpan() << std::endl;
	std::cout << spanner.shortestSpan() << std::endl;
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(-5);
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(-3);
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(-17);
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(-9);
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(-11);
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(-7);
	std::cout << "---------------------" << std::endl;
	std::cout << spanner.shortestSpan() << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << spanner.longestSpan() << std::endl;
	std::cout << "---------------------" << std::endl;
	std::vector<int> it;
	for (int i = 1; i < 6; i++)
		it.push_back(i);
	spanner.add_number_by_iterator(it.begin(), it.end());
	std::cout << spanner << std::endl;
	system("leaks span");
}
