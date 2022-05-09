#include "conversion.hpp"

void	check_exceptions(char *argv)
{
	std::string	str;
	std::string comparisons[] {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	str.assign(argv);
	for (int i = 0; i < 6; i++) {
		if (!str.compare(comparisons[i]))
		{
			
		}
	};
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		// INT CASE
	/*	int i = std::atoi(argv[1]);
		conversion conv(i);
		std::cout << conv.getChar() << " && " << conv.getNumberInt() << std::endl;
		std::cout << conv.getNumberFloat() << " && "  << conv.getNumberDouble() << std::endl;*/

		//FLOAT CASE : 42.0 no muestra el 0
	/*	std::string str;
		str.assign(argv[1]);
		float f = std::stof(str);
		conversion conv(f);
		std::cout << conv.getChar() << " && " << conv.getNumberInt() << std::endl;
		std::cout << conv.getNumberFloat() << " && " << conv.getNumberDouble() <<std::endl;*/

		//DOUBLE CASE
	/*	std::string str;
		str.assign(argv[1]);
		double d = std::stod(str);
		conversion conv(d);
		std::cout << conv.getChar() << " && " << conv.getNumberInt() << std::endl;
		std::cout << conv.getNumberFloat() << " && " << conv.getNumberDouble() <<std::endl;*/

		//CHAR CASE
	/*	conversion conv(argv[1][0]);
		std::cout << conv.getChar() << " && " << conv.getNumberInt() << std::endl;
		std::cout << conv.getNumberFloat() << " && " << conv.getNumberDouble() <<std::endl;*/

		//REAL PROGRAM
		check_exceptions(argv[1]);
	}
	return 0;
}
