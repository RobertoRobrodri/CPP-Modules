#include "conversion.hpp"

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		std::string	str;
		str.assign(argv[1]);
		conversion conv(str);
		conv.check_exceptions();
		conv.char_case();
		conv.int_case();
		conv.float_case();
		conv.double_case();
	}
	return 0;
}
