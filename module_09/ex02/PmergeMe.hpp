#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <string>
#include <iostream>

class	PmergeMe {

	private:

	public:

		PmergeMe 			( void );
		PmergeMe 			( std::string str );
		PmergeMe 			( const PmergeMe & var );
		~PmergeMe			( void );
		PmergeMe &operator=	(const PmergeMe &tmp);
};
std::ostream &operator<<(std::ostream& os, const PmergeMe &tmp);

#endif
