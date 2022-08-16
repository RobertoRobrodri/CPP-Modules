
#include "span.hpp"

span::span( void ) : _N(1), i(0) {

  std::cout << "Default constructor called" << std::endl;

}

span::span( unsigned int N ) : _N (N), i(0) {

  std::cout << "Parameter constructor called" << std::endl;

}

span::span( const span & var ) {
  *this = var;
  std::cout << "Copy constructor called" << std::endl;
}

span::~span( void ) {

  std::cout << "Destructor constructor called" << std::endl;

}

void	span::addNumber( int n ) {

  try
  {
    if (this->i < this->_N.size())
    {
      this->_N[this->i] = n;
      i++;
    }
    else
      throw std::exception();
  }
  catch(const std::exception& e) {
    std::cout << e.what() << std::endl;
  }
}

int  span::shortestSpan( void )
{
  return *std::min_element(this->_N.begin(), this->_N.end());
}

int  span::longestSpan( void )
{
  return *std::max_element(this->_N.begin(), this->_N.end());
}

span & span::operator=(const span &s){
    this->_N = s._N;
    return *this;
}
