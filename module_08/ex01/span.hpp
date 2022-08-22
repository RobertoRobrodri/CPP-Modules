#ifndef SPAN_HPP
#define SPAN_HPP
#include <string>
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class	span {

	private:

		unsigned int	i;
		unsigned int	max_size;
		std::vector <int> _N;

	public:

		span ( void );
		span ( unsigned int N );
		span ( const span & var );
		~span ( void );

		void	addNumber( int n );
		int		shortestSpan( void );
		int		longestSpan( void );

		std::vector <int> get_vector(void) const;

		span	& operator=(const span &s);
		void	add_number_by_iterator(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
std::ostream&	operator<<(std::ostream& os, const span& obj);


#endif
