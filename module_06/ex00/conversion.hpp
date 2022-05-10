#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>
#include <string>
#include <limits>
#include <cmath>

class conversion
{
	private:

		double	_d;
		float	_f;
		int		_i;
		char	_c;

		std::string	literal;
		bool		flag;

		void	cast_exceptions(int i) const;
		void	print_casting(void) const;


	public:

		conversion(void);
		conversion(std::string str);
	//	conversion(conversion const & conv);
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

		void	char_case(void) const;
		void	int_case(void) const;
		void	float_case(void) const;
		void	double_case(void) const;
		void	check_exceptions(void) const;
};

#endif
