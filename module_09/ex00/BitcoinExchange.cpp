#include "BitcoinExchange.hpp"

// CONSTRUCTORS
BitcoinExchange::BitcoinExchange( void ) {

  std::cout << "Default constructor called" << std::endl;
  return ;
}

BitcoinExchange::BitcoinExchange( std::string str ) {

  (void) str;
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

void	BitcoinExchange::read_file			(std::string file) {
  std::fstream input_val;
  std::multimap<std::string, int> values;
  std::multimap<std::string, int> exchange;
  try 
  {
    input_val.open(file);
    if (!input_val)
      throw std::runtime_error("Could not open file");
  	std::fstream bitcoin_csv("data.csv");
	if (!bitcoin_csv)
		throw std::runtime_error("Could not open file");
  values 	 = this->load_values(input_val, '|');
	exchange = this->load_values(bitcoin_csv, ',');
	//this->get_values(values, exchange);
  }
  catch (std::exception &ex) {
    std::cout << ex.what() << std::endl;
  }
}

std::multimap<std::string, int>	BitcoinExchange::load_values			(std::fstream &values, char separator) {
  std::multimap<std::string, int> mp;
  std::string buffer;
  std::string key;
  std::string value;
  std::size_t pos;
  struct tm time;

  while (getline(values, buffer))
  {
    // TODO Qué pasa si no lo encuentra????
    pos = buffer.find(separator);
    // Try, catch?
    key = buffer.substr(0, pos);
    strptime(key.c_str(), "%y-%m-%u", &time);
    //mktime
    value = buffer.substr(pos + 1, buffer.length());
    mp.insert(std::pair<std::string, int>(key, atoi(value.c_str())));
  }
    // std::multimap<std::string,int>::iterator it;
    // for (it=mp.begin(); it!=mp.end(); ++it)
    //   std::cout << (*it).first << " => " << (*it).second << '\n';
	return mp;
}

// void	get_values(std::multimap<std::string, int> values, std::multimap<std::string, int> exchange) {


// }