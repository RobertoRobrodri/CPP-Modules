#include "conversion.hpp"

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
		std::string	str;
		str.assign(argv[1]);
		if (str.length() > 1)
		{
			// Double n float
		}
		else
		{
			if (std::isalpha(str[0]))
			{
				conversion conv(str[0]);
				conv.charcase();
			}
			else
			{
				int i = std::atoi(argv[1]);
				conversion conv(i);
				conv.intcase();
			}
		}
	}
	return 0;
}
