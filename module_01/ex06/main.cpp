#include "karen.hpp"

void	karen_filter(int log) {

	Karen	Charo;

	switch (log)
	{
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			Charo.complain("DEBUG");
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			Charo.complain("INFO");
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			Charo.complain("WARNING");
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			Charo.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

}

int main(int argc, char **argv)
{

	if (argc < 2)
		std::cout << "Be quiet, we don´t want to awake the beast" << std::endl;
	else if (argc > 2)
		std::cout << "Hideous matriarch, vile queen of the aphotic depths - she has no place in the sane world!" << std::endl;
	else
	{
		int	log = 0;
		std::string actions[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
		std::string	level;

		level.assign(argv[1]);
		for (int i = 0; i < 4; i++)
			if (!level.compare(actions[i])) {
				log = i + 1;
				break ;
			}
		karen_filter(log);
	}
	return (0);
}