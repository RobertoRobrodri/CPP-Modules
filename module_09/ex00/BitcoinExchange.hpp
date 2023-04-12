#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <map>
#include <ctime> 

class	BitcoinExchange {

	private:
		// std::multimap<std::string, int> _data;
		// std::multimap<std::string, int> _values;

	public:

		std::multimap<time_t, float> _data;
		std::multimap<time_t, float> _values;

		BitcoinExchange 			( void );
		BitcoinExchange 			( std::multimap<time_t, float> data, std::multimap<time_t, float> values );
		BitcoinExchange 			( const BitcoinExchange & var );
		~BitcoinExchange			( void );
		BitcoinExchange &operator=	(const BitcoinExchange &tmp);

		void	get_values( void );
};
std::fstream										&read_file			(std::string file);
std::multimap<time_t, float>	load_values			(std::fstream &values, char separator);
std::ostream &operator<<(std::ostream& os, const BitcoinExchange &tmp);

#endif
