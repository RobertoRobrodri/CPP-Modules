#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <string>
#include <iostream>
#include <forward_list>
#include <list>
#include <deque>
#include <ctime>
#include <algorithm>

class	PmergeMe {

	private:


	public:
		std::list <int>			_list;
		std::deque <int>		_deck;

		PmergeMe 			( void );
		PmergeMe 			( std::string str );
		PmergeMe 			( const PmergeMe & var );
		~PmergeMe			( void );
		PmergeMe &operator=	(const PmergeMe &tmp);

};
std::ostream &operator<<(std::ostream& os, const PmergeMe &tmp);
std::list<int>				sort_list( std::list<int> list );
std::deque<int>				sort_deck( std::deque<int> list );

#endif
