#ifndef SPAN_HPP
#define SPAN_HPP
#include <string>
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class	span {

	private:

		std::vector <int> _N;

	public:

		span ( void );
		span ( unsigned int N );
	//	span ( const span & var );
		~span ( void );

		void	addNumber( int n );
		int		shortestSpan( void );
		int		longestSpan( void );

		
};

#endif
