#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {

  std::cout << "Default constructor called" << std::endl;
  return ;
}

PmergeMe::PmergeMe( std::string str ) {

  (void) str;
  std::cout << "Parameter constructor called" << std::endl;
  return ;
  
}

PmergeMe::PmergeMe( const PmergeMe & var ) {
  
  std::cout << "Copy constructor called" << std::endl;
  *this = var;
  return ;
  
}

PmergeMe::~PmergeMe( void ) {
  
  std::cout << "Destructor called" << std::endl;
  return ;

}

PmergeMe & PmergeMe::operator=(const PmergeMe &tmp) {

  (void) tmp;
  std::cout << "Operator equalizer called" << std::endl;
  return (*this);
  
}

std::ostream &operator<<(std::ostream& os, const PmergeMe &tmp) {

  (void) tmp;
	os << std::endl << "Operator output called" << std::endl;
	return (os);
  
}
