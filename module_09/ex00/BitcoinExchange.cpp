#include "BitcoinExchange.hpp"

// CONSTRUCTORS
BitcoinExchange::BitcoinExchange( void ) {

  std::cout << "Default constructor called" << std::endl;
  return ;
}

BitcoinExchange::BitcoinExchange( std::multimap<std::string, int> data, std::multimap<std::string, int> values ) : _data(data), _values(values) {
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

  (void) tmp;
	os << std::endl << "Operator output called" << std::endl;
	return (os);
  
}

// FUNCTIONS

std::fstream	&read_file			(std::string file) {
  std::fstream *input_val = new std::fstream;

  try 
  {
    input_val->open(file);
    if (!input_val)
      throw std::runtime_error("Could not open file");
  }
  catch (std::exception &ex) {
    std::cout << ex.what() << std::endl;
  }
  return *input_val;
}

std::multimap<std::string, int>	load_values			(std::fstream &values, char separator) {
  std::multimap<std::string, int> mp;
  std::string buffer;
  std::string key;
  std::string value;
  std::size_t pos;
  //struct tm time;
  //time_t  time_result;

  while (getline(values, buffer))
  {
    // TODO Qué pasa si no lo encuentra????
    pos = buffer.find(separator);
    // Try, catch?
    key = buffer.substr(0, pos);
    //strptime(key.c_str(), "%y-%m-%u", &time);
    //time_result = mktime(&time);
    //std::cout << time_result << std::endl;
    value = buffer.substr(pos + 1, buffer.length());
    mp.insert(std::pair<std::string, int>(key, atoi(value.c_str())));
  }
    // std::multimap<std::string,int>::iterator it;
    // for (it=mp.begin(); it!=mp.end(); ++it)
    //   std::cout << (*it).first << " => " << (*it).second << '\n';
	return mp;
}

void	BitcoinExchange::get_values( void ) {
  std::multimap<std::string,int>::iterator it;
  std::multimap<std::string,int>::iterator tmp;

    for (it=this->_values.begin(); it!=this->_values.end(); ++it)
    {
		//std::cout << (*it).first << " => " << (*it).second << '\n';
		tmp = this->_data.find((*it).first);
		std::cout << (*it).second * *(tmp).second << std::endl;
    }

}