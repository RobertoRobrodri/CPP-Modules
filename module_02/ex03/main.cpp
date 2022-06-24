#include "Point.hpp"

int main( void )
{
	Point v1(1, 1);
	Point v2(3, 4);
	Point v3(5, 6);
	Point v4(1, 2);
	std::cout << bsp(v1, v2, v3, v4) << std::endl;
}
