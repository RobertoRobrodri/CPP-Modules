#include "span.hpp"

int main ( void )
{
	span void_spanner;
	span spanner( 6 );

	void_spanner.addNumber(1);
	spanner.addNumber(4);
	spanner.addNumber(12);
	spanner.addNumber(21);
	spanner.addNumber(-3);
	spanner.addNumber(0);
	spanner.addNumber(7);

	std::cout << spanner.shortestSpan() << std::endl;
	std::cout << spanner.longestSpan() << std::endl;
}