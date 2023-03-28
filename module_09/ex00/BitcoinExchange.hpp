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
		// std::map<std::string, int> _data;
		// std::map<std::string, int> _values;

	public:

		std::map<std::tm, int> _data;
		std::map<std::tm, int> _values;

		BitcoinExchange 			( void );
		BitcoinExchange 			( std::map<std::tm, int> data, std::map<std::tm, int> values );
		BitcoinExchange 			( const BitcoinExchange & var );
		~BitcoinExchange			( void );
		BitcoinExchange &operator=	(const BitcoinExchange &tmp);

		std::time_t BitcoinExchange::get_unix_date (std::tm time) const;
//		void	get_values( void );
};
std::fstream			&read_file			(std::string file);
std::map<std::tm, int>	load_values			(std::fstream &values, char separator);
std::ostream &operator<<(std::ostream& os, const BitcoinExchange &tmp);

#endif
