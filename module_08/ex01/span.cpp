
#include "span.hpp"

span::span( void ) : i(0), max_size(0)  {

  std::cout << "Default constructor called" << std::endl;

}

span::span( unsigned int N ) : i(0), max_size (N) {

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
		if (this->i < this->max_size)
		{
			this->_N.push_back(n);
			this->i++;
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

	try
	{
		if (this->i < 2)
			throw span::not_enough_num();
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
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
		return 0;}
	return diff;
}

int  span::longestSpan( void )
{
	try
	{
		if (this->i < 2)
			throw span::not_enough_num();
		int max = *std::max_element(this->_N.begin(), this->_N.end());
		int min = *std::min_element(this->_N.begin(), this->_N.end());
		return std::abs(max - min);
	}
	catch(const std::exception& e) { std::cout << e.what() << std::endl; }
	return 0;
}

span & span::operator=(const span &s){
	this->_N = s._N;
	this->i = s.i;
	this->max_size = s.max_size;
	return *this;
}

void	span::add_number_by_iterator(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

	std::vector<int> tmp(begin, end);

	try
	{
		if ((this->max_size - this->i) < tmp.size())
			throw span::not_enough_space();
		copy(tmp.begin(), tmp.end(), back_inserter(this->_N));
	}
	catch(const std::exception& e) { std::cout << e.what() << std::endl; }
}

std::vector <int> span::get_vector(void) const {
	return this->_N;
}

std::ostream&	operator<<(std::ostream& os, const span& obj) {
	std::vector<int> it;

	it = obj.get_vector();
	for (std::vector<int>::iterator iter = it.begin(); iter != it.end(); iter++)
		os << *iter << std::endl;
	return os;
}
