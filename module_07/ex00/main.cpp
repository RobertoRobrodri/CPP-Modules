# include "whatever.hpp"

int main (void)
{
	int x = 5, y = 10;
	std::cout << max<int>(x, y) << std::endl;
	std::cout << min<int>(x, y) << std::endl;
	std::cout << x << " " << y << std::endl;
	swap<int>(x, y);
	std::cout << x << " " << y << std::endl;

	float f = 42.4, f_2 = 200.21;
	std::cout << max<float>(f, f_2) << std::endl;
	std::cout << min<float>(f, f_2) << std::endl;
	std::cout << f << " " << f_2 << std::endl;
	swap<float>(f, f_2);
	std::cout << f << " " << f_2 << std::endl;

	// Implicit cast of f variable to int type
	std::cout << max<int>(x, f) << std::endl;


	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}