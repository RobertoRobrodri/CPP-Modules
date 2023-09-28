#ifndef RPN_HPP
#define RPN_HPP
#include <string>
#include <iostream>
#include <sstream>
#include <stack>

class	RPN {

	private:

		bool		get_value(void);

	public:

		std::stack<int>	stack;
		char			operation_type;

		RPN 			( void );
		RPN 			( std::stack<int> stk, char op );
		RPN 			( const RPN & var );
		~RPN			( void );
		RPN &operator=	(const RPN &tmp);

		void			calculate(std::string calculus);
};
std::ostream &operator<<(std::ostream& os, const RPN &tmp);
bool is_numeric (std::string str);

#endif
