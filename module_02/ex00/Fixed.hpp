#ifndef FIXED_HPP
# define FIXED_HPP
# define MAX_BIT 8
# include <string>
# include <iostream>

class	Fixed {

	private:

		int					_fixed_point;
		static const int	_f_bits = MAX_BIT;

	public:

		Fixed(void);
		Fixed(const Fixed &f);
		~Fixed(void);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
