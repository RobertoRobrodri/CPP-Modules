#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>
#include <string>
#include <climits>

class conversion
{
	private:

		double	_d;
		float	_f;
		int		_i;
		char	_c;

	public:
		explicit conversion(double d);
		explicit conversion(float f);
		explicit conversion(int i);
		explicit conversion(char c);
		~conversion();

		float	const & getNumberFloat(void) const;
		int	const & getNumberInt(void) const;
		double	const & getNumberDouble(void) const;
		char const & getChar(void) const;
};

#endif
