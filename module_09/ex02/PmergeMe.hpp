#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <string>
#include <iostream>
#include <list>
#include <deque>
#include <ctime>
#include <algorithm>
#include <climits>

class	PmergeMe {

	private:


	public:
		std::list <int>			_list;
		std::deque <int>		_deck;

		PmergeMe 			( void );
		PmergeMe 			( std::list<int> list, std::deque<int> deck );
		PmergeMe 			( const PmergeMe & var );
		~PmergeMe			( void );
		PmergeMe &operator=	(const PmergeMe &tmp);

};
std::ostream &operator<<(std::ostream& os, const PmergeMe &tmp);
std::ostream &operator<<(std::ostream& os, const std::deque<int> &tmp);
std::ostream &operator<<(std::ostream& os, const std::list<int> &tmp);
void						sort_list( std::list<int> &list );
void						sort_deck( std::deque<int> &deck );
#endif