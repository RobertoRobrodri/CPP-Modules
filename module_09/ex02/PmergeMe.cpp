#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {

  std::cout << "Default constructor called" << std::endl;
  return ;
}

PmergeMe::PmergeMe( std::list<int> list, std::deque<int> deck ) : _list(list), _deck(deck) {

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

  std::cout << "Operator equalizer called" << std::endl;
  this->_list = tmp._list;
  this->_deck = tmp._deck;
  return (*this);
  
}

std::ostream &operator<<(std::ostream& os, const PmergeMe &tmp) {

	std::list<int>::const_iterator it;
	std::deque<int>::const_iterator d_it;

	os << "Printing list..." << std::endl;
	for (it = tmp._list.begin(); it != tmp._list.end(); it++)
		os << *it << " ";
	os << std::endl;
	os << "Printing deque... " << std::endl;
	for (d_it = tmp._deck.begin(); d_it != tmp._deck.end(); d_it++)
		os << *d_it << " ";
	return (os);
}

// FUNCTIONS

std::list<int>  sort_list( std::list<int> list ) {
	std::list<int> tmp;
	size_t size = list.size() / 2;
	std::list<int>::iterator half = list.begin();

	std::advance(half, size);

	// Separar la lista en dos y ordenar cada una
	tmp.splice(tmp.begin(), list, half, list.end());
	if (list.size() > 1)
		list = sort_list(list);
	if (tmp.size() > 1)
		tmp = sort_list(tmp);
	list.merge(tmp);
	return list;
}

std::deque<int> sort_deck( std::deque<int> deck ) {
	std::deque<int> tmp;
	std::deque<int> ret;
	size_t size = deck.size() / 2;
	for (size_t i = 0; i < size; i++)
	{
		tmp.push_front(deck.front());
		deck.pop_front();
	}
	if (deck.size() > 1)
		deck = sort_deck(deck);
	if (tmp.size() > 1)
		tmp = sort_deck(tmp);
	std::merge(deck.begin(), deck.end(), tmp.begin(), tmp.end(), std::back_inserter(ret));
	return (ret);
}