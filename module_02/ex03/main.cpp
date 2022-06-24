#include "Point.hpp"

int main( void )
{
	Point v1(1, 1);
	Point v2(2, 4);
	Point v3(4, 1);
	Point v4(2, 2);
	std::cout << bsp(v1, v2, v3, v4) << std::endl;
}
