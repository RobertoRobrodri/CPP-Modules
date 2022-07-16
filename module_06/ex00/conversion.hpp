#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <exception>

class conversion
{
	private:

		int		_i;
		double	_d;
		float	_f;
		char	_c;

		bool		flag;
		std::string	literal;

		void	cast_exceptions(int i) const;
		void	print_casting(void) const;
		int		dot_counter(char to_find) const;


	public:

		class WrongInput : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Wrong Input");
				}

		};

		conversion(void);
		conversion(std::string str);
		conversion(conversion const & conv);
		~conversion();

		explicit conversion(double d);
		explicit conversion(float f);
		explicit conversion(int i);
		explicit conversion(char c);

		float	const & getNumberFloat(void) const;
		int	const & getNumberInt(void) const;
		double	const & getNumberDouble(void) const;
		char const & getChar(void) const;
		std::string	const & getLiteral(void) const;
		bool const & getFlag(void) const;

		void	try_cases(void) const;

		bool	char_case(void) const;
		bool	int_case(void) const;
		bool	float_case(void) const;
		bool	double_case(void) const;
		bool	check_exceptions(void) const;

		conversion	& operator=(conversion const & conv);
};

#endif
