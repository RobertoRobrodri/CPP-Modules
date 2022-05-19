#include "conversion.hpp"

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		std::string	str;
		str.assign(argv[1]);
		conversion conv(str);
		try 
		{
			conv.try_cases();
		}
		catch (conversion::WrongInput &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
