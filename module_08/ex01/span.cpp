
#include "span.hpp"

span::span( void ) : _N(1) {

  std::cout << "Default constructor called" << std::endl;
  
}

span::span( unsigned int N ) : _N (N) {

  std::cout << "Parameter constructor called" << std::endl;
  
}

/*span::span( const span & var ) {

  std::cout << "Copy constructor called" << std::endl;
  
}*/

span::~span( void ) {

  std::cout << "Destructor constructor called" << std::endl;

}

void	span::addNumber( int n ) {
  static unsigned int  i = 0;

  if (i < this->_N.size())
  {
    this->_N[i] = n;
    i++;
  }
// else
  //  throw std::exception();
}

int  span::shortestSpan( void )
{
  return *std::min_element(this->_N.begin(), this->_N.end());
}

int  span::longestSpan( void )
{
  return *std::max_element(this->_N.begin(), this->_N.end());
}