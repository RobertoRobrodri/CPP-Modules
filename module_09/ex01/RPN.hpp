#ifndef RPN_HPP
#define RPN_HPP
#include <string>
#include <iostream>

class	RPN {

	private:

	public:

		RPN 			( void );
		RPN 			( std::string str );
		RPN 			( const RPN & var );
		~RPN			( void );
		RPN &operator=	(const RPN &tmp);
};
std::ostream &operator<<(std::ostream& os, const RPN &tmp);

#endif
