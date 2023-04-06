#ifndef RPN_HPP
#define RPN_HPP
#include <string>
#include <iostream>
#include <sstream>
#include <stack>

class	RPN {

	private:

		void		get_value(void);

	public:

		std::stack<int>	stack;
		char			operation_type;

		RPN 			( void );
	//	RPN 			( std::string str );
		RPN 			( const RPN & var );
		~RPN			( void );
		RPN &operator=	(const RPN &tmp);

		void			calculate(std::string calculus);
};
std::ostream &operator<<(std::ostream& os, const RPN &tmp);

#endif
