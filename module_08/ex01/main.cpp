#include "span.hpp"

int main ( void )
{
	span void_spanner;
	span spanner( 6 );

	void_spanner.addNumber(1);
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(4);
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(12);
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(21);
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(-3);
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(0);
	std::cout << "---------------------" << std::endl;
	spanner.addNumber(7);
	std::cout << "---------------------" << std::endl;
	std::cout << spanner.shortestSpan() << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << spanner.longestSpan() << std::endl;
	std::cout << "---------------------" << std::endl;
}
