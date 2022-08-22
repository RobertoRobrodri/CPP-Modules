
#include "span.hpp"

span::span( void ) : i(0), _N(1)  {

  std::cout << "Default constructor called" << std::endl;

}

span::span( unsigned int N ) : i(0), _N (N) {

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
			this->_N[i] = n;
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
	int							diff = INT_MAX;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it_next;

  if (this->i < 2)
  {
    std::cout << "Not enough numbers " << std::endl;
    return 0;
  }
  for (it = this->_N.begin(); it != this->_N.end(); it++)
	{
		it_next = it + 1;
		while (it_next != this->_N.end())
		{
			if (std::abs(*it - *it_next) < diff)
				diff = std::abs(*it - *it_next);
			it_next++;
		}
	}
	return diff;
}

int  span::longestSpan( void )
{
	if (this->i < 2)
	{
		std::cout << "Not enough numbers " << std::endl;
		return 0;
	}
	int max = *std::max_element(this->_N.begin(), this->_N.end());
	int min = *std::min_element(this->_N.begin(), this->_N.end());
	return std::abs(max - min);
}

span & span::operator=(const span &s){
	this->_N = s._N;
	return *this;
}
