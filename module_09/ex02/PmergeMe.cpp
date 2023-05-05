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

std::ostream &operator<<(std::ostream& os, const std::deque<int> &tmp) {
	std::deque<int>::const_iterator d_it;

	for (d_it = tmp.begin(); d_it != tmp.end(); d_it++)
		os << *d_it << " ";
	return (os);
}

std::ostream &operator<<(std::ostream& os, const std::list<int> &tmp) {
	std::list<int>::const_iterator d_it;

	for (d_it = tmp.begin(); d_it != tmp.end(); d_it++)
		os << *d_it << " ";
	return (os);
}

// FUNCTIONS

void  sort_list( std::list<int> &list ) {
	if (list.size() <= 1)
		return ;
	size_t size = list.size() / 2;
	std::list<int> left;
	std::list<int> right = list;
	std::list<int>::iterator half = right.begin();

	std::advance(half, size);
	left.splice(left.begin(), right, half, right.end());
	sort_list(right);
	sort_list(left);
    std::list<int>::iterator j = left.begin();
	std::list<int>::iterator k = right.begin();
	std::list<int>::iterator i = list.begin();
    while (j != left.end() && k != right.end()) 
    {
        if (*j < *k) {
			list.insert(i, *j);
			list.erase(i++);
            j++;
        }
        else {
            list.insert(i, *k);
			list.erase(i++);
            k++;
        }
    }
    while (j != left.end()) {
        list.insert(i, *j);
		list.erase(i++);
        j++;
    }
    while (k != right.end()) {
        list.insert(i, *k);
		list.erase(i++);
        k++;
    }
}

void sort_deck( std::deque<int> &deck ) {
	if (deck.size() <= 1)
		return ;
	size_t size = deck.size() / 2;
	std::deque<int> right(deck.begin(), deck.end() - size);
	std::deque<int> left(deck.end() - size, deck.end());
	sort_deck(right);
	sort_deck(left);
	int L_size = left.size();
    int R_size = right.size();
    int i = 0, j = 0, k = 0;
    while (j < L_size && k < R_size) 
    {
        if (left[j] < right[k]) {
            deck[i] = left[j];
            j++;
        }
        else {
            deck[i] = right[k];
            k++;
        }
        i++;
    }
    while (j < L_size) {
        deck[i] = left[j];
        j++; i++;
    }
    while (k < R_size) {
        deck[i] = right[k];
        k++; i++;
    }
}