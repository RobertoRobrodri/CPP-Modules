#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <string>
#include <iostream>
#include <vector>
#include <stack>

template < typename T >
class	MutantStack : public std::stack < T > {

	private:



	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack ( void ) {};
		virtual ~MutantStack ( void ) {} ;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};

#endif
