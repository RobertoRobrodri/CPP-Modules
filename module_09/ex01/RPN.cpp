#include "RPN.hpp"

RPN::RPN( void ) {

  std::cout << "Default constructor called" << std::endl;
  return ;
}

RPN::RPN( std::string str ) {

  (void) str;
  std::cout << "Parameter constructor called" << std::endl;
  return ;
  
}

RPN::RPN( const RPN & var ) {
  
  std::cout << "Copy constructor called" << std::endl;
  *this = var;
  return ;
  
}

RPN::~RPN( void ) {
  
  std::cout << "Destructor called" << std::endl;
  return ;

}

RPN & RPN::operator=(const RPN &tmp) {

  (void) tmp;
  std::cout << "Operator equalizer called" << std::endl;
  return (*this);
  
}

std::ostream &operator<<(std::ostream& os, const RPN &tmp) {

  (void) tmp;
	os << std::endl << "Operator output called" << std::endl;
	return (os);
  
}
