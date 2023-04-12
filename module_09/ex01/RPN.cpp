#include "RPN.hpp"

RPN::RPN( void ) {

  std::cout << "Default constructor called" << std::endl;
  return ;
}

RPN::RPN( std::stack<int> stk, char op ) : stack(stk), operation_type(op) {

  std::cout << "Parameter constructor called" << std::endl;
  return ;
  
}

RPN::RPN( const RPN & var ) {
  
  std::cout << "Copy constructor called" << std::endl;
  *this = var;
  return ;
  
}

RPN::~RPN( void ) {
  
  std::cout << "Destructor called" << std::endl;
  return ;

}

RPN & RPN::operator=(const RPN &tmp) {

  std::cout << "Operator equalizer called" << std::endl;
  this->stack = tmp.stack;
  this->operation_type = tmp.operation_type;
  return (*this);
  
}

std::ostream &operator<<(std::ostream& os, const RPN &tmp) {

	(void) tmp;
	os << std::endl << "Operator output called" << std::endl;
	return (os);
  
}


// FUNCTIONS

void			RPN::calculate(std::string calculus) {
  
	std::size_t	sign_pos;
	std::string	str;
	std::string sub_str;

	while ((sign_pos = calculus.find_first_of("+-/*")) != std::string::npos)
	{
		str = calculus.substr(0, sign_pos);
		this->operation_type = calculus[sign_pos];

		std::stringstream buffer(str);
		while (getline(buffer, sub_str, ' '))
		{
			if (!sub_str.empty())
				this->stack.push(atoi(sub_str.c_str()));
		}
		this->get_value();
		calculus = calculus.substr(sign_pos + 1, calculus.length());
	}
	std::cout << "Result = " << this->stack.top() << std::endl;
}

void		RPN::get_value ( void ) {
	int	tmp;
	int result;

	tmp = this->stack.top();
	this->stack.pop();
	std::cout << tmp << this->operation_type << this->stack.top() <<std::endl;
	if (this->operation_type == '*')
	{
		result = this->stack.top() * tmp;
		this->stack.pop();
		this->stack.push(result);
	}
	else if (this->operation_type == '+')
	{
		result = this->stack.top() + tmp;
		this->stack.pop();
		this->stack.push(result);
	}
	else if (this->operation_type == '-')
	{
		result = this->stack.top() - tmp;
		this->stack.pop();
		this->stack.push(result);
	}
	else if (this->operation_type == '/')
	{
		result = this->stack.top() / tmp;
		this->stack.pop();
		this->stack.push(result);
	}
	// TODO default case
	
}