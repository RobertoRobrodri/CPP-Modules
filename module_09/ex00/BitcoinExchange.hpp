#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <map>
#include <time.h> 

class	BitcoinExchange {

	private:

	public:

		BitcoinExchange 			( void );
		BitcoinExchange 			( std::string str );
		BitcoinExchange 			( const BitcoinExchange & var );
		~BitcoinExchange			( void );
		BitcoinExchange &operator=	(const BitcoinExchange &tmp);

		void	read_file			(std::string file);
		std::multimap<std::string, int>	load_values			(std::fstream &values, char separator);
		//void	get_values(std::multimap<std::string, int> values, std::multimap<std::string, int> exchange);
};
std::ostream &operator<<(std::ostream& os, const BitcoinExchange &tmp);

#endif
