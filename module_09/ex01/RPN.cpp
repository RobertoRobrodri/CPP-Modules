#include "RPN.hpp"

RPN::RPN( void ) {

  std::cout << "RPN Default constructor called" << std::endl;
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
	std::size_t	n_count = 0;

	try {
		while ((sign_pos = calculus.find_first_of("+-/*")) != std::string::npos)
		{
			if (isdigit(calculus[sign_pos + 1]))
				sign_pos = calculus.find_first_of("+-/*", sign_pos + 1);
			str = calculus.substr(0, sign_pos);
			this->operation_type = calculus[sign_pos];

			std::stringstream buffer(str);
			while (getline(buffer, sub_str, ' '))
			{
				if (is_numeric(sub_str) == 0)
					throw std::runtime_error("Error muerooo");
				if (!sub_str.empty()) {
					this->stack.push(atoi(sub_str.c_str()));
					n_count++;
				}
			}
			if (this->stack.size() < 2 || n_count > 2)
				throw std::runtime_error("Error");
			this->get_value();
			calculus = calculus.substr(sign_pos + 1, calculus.length());
			n_count = 0;
		}
		if (calculus.length() || this->stack.size() != 1)
			throw std::runtime_error("Error");
		std::cout << "Result = " << this->stack.top() << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
}

void		RPN::get_value ( void ) {
	int	tmp;
	int result;

	tmp = this->stack.top();
	this->stack.pop();
	//std::cout << tmp << this->operation_type << this->stack.top() <<std::endl;
	switch ( this->operation_type ) {
		case '*':
		{
			result = this->stack.top() * tmp;
			this->stack.pop();
			this->stack.push(result);
			break ;
		}
		case '+':
		{
			result = this->stack.top() + tmp;
			this->stack.pop();
			this->stack.push(result);
			break ;
		}
		case '-':
		{
			result = this->stack.top() - tmp;
			this->stack.pop();
			this->stack.push(result);
			break ;
		}
		case '/':
		{
			result = this->stack.top() / tmp;
			this->stack.pop();
			this->stack.push(result);
			break ;
		}
		default:
			std::cout << "Not able to calculate" << std::endl;
	}
}

bool is_numeric (std::string str) {
	for (std::size_t i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]) == 0 && str[i] != '-')
			return 0;
		if (str[i] == '-' && isdigit(str[++i]) == 0)
			return 0;
	}
	return 1;
}