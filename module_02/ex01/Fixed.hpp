#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>
# include <cmath>

class	Fixed {

	private:

		int					_fixed_point;
		static const int	_f_bits = 8;

	public:

		Fixed(const int i);
		Fixed(const float f);
		Fixed(void);
		Fixed(const Fixed &f);
		~Fixed(void);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		Fixed	& operator=(Fixed const &f);
		std::ostream	& operator<<(std::ostream &os, Fixed &f);

		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif
