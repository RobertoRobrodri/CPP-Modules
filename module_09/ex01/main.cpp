#include "RPN.hpp"

bool	is_valid_operation(char *str)
{
	if (str.find("+-/*") != str.lenght())
		return 0;
	return 1;
}

int main (int argc, char **argv)
{
	if ( argc == 2 )
	{
		if (is_valid_operation(argv[1]))
		{
			RPN rpn;
			rpn.calculate(argv[1]);
		}
	}
	return 0;
}