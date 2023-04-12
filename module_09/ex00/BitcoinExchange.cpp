#include "BitcoinExchange.hpp"

// CONSTRUCTORS
BitcoinExchange::BitcoinExchange( void ) {

  std::cout << "Default constructor called" << std::endl;
  return ;
}

BitcoinExchange::BitcoinExchange( std::multimap<time_t, float> data, std::multimap<time_t, float> values ) : _data(data), _values(values) {
  std::cout << "Parameter constructor called" << std::endl;
  return ;  
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & var ) {
  
  std::cout << "Copy constructor called" << std::endl;
  *this = var;
  return ;
  
}

// DESTRUCTOR
BitcoinExchange::~BitcoinExchange( void ) {
  
  std::cout << "Destructor called" << std::endl;
  return ;

}

// OPERATORS
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &tmp) {

  (void) tmp;
  std::cout << "Operator equalizer called" << std::endl;
  return (*this);
  
}

std::ostream &operator<<(std::ostream& os, const BitcoinExchange &tmp) {
	std::multimap<time_t, float>::const_iterator it;
	
	std::cout << "Printing values... " << std::endl;
	for (it=tmp._values.begin(); it!=tmp._values.end(); ++it)
		os << (*it).first << " => " << (*it).second << '\n';
	std::cout << "Printing data csv... " << std::endl;
	for (it=tmp._data.begin(); it!=tmp._data.end(); ++it)
		os << (*it).first << " => " << (*it).second << '\n';
	return (os);
}

// FUNCTIONS

std::fstream	&read_file			(std::string file) {
	std::fstream *input_val = new std::fstream;

	input_val->open(file);
	return *input_val;
}

std::multimap<time_t, float>	load_values			(std::fstream &values, char separator) {
	std::multimap<time_t, float> mp;
	std::string buffer;
	std::string key;
	std::string value;
	std::size_t pos;
	time_t time;
	std::tm time_struct = {};

	while (getline(values, buffer))
	{
		pos 	= buffer.find(separator);
		key 	= buffer.substr(0, pos);
		try {
			if (strptime(key.c_str(), "%Y-%m-%d", &time_struct) == NULL)
			{
				std::cout << key << std::endl;
				// TO DO Excepciones personalizadas
				throw std::runtime_error("Error Date");
			}
			time 	= std::mktime(&time_struct);
			value 	= buffer.substr(pos + 1, buffer.length());
			mp.insert(std::pair<time_t, float>(time, std::stof(value)));
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}
	return mp;
}
void	BitcoinExchange::get_values( void ) {
	std::multimap<time_t,float>::iterator it;
	std::multimap<time_t,float>::iterator finder;
	
	for (it=this->_values.begin(); it!=this->_values.end(); ++it)
	{
		finder = this->_data.find((*it).first);
		if (finder != this->_data.end()) {
			std::cout << (*it).second * (*finder).second << std::endl;
		}
		else
		{
			finder = this->_data.lower_bound((*it).first);
			if (finder == this->_data.end())
				finder--;
			std::cout << (*it).second * (*finder).second << std::endl;
		}
	}
}