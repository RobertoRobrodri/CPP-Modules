#include "karen.hpp"

void Karen::debug( void ) {
	std::cout << DEBUG_MSG << std::endl;
}

void Karen::info( void ) {
	std::cout << INFO_MSG << std::endl;
}

void Karen::warning( void ) {
	std::cout << WARNING_MSG << std::endl;
}

void Karen::error( void ) {
	std::cout << ERROR_MSG << std::endl;
}

void Karen::complain(std::string level) {
	void (Karen::*func[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string actions[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (int i = 0; i < 4; i++)
		if (!level.compare(actions[i])) {
			(this->*func[i])();
			return ;
		}
	return ;
}