#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>

class	Fixed {

	private:

		int					_fixed_point;
		static const int	_f_bits;

	public:

		Fixed(void);
		Fixed(const Fixed &f);
		~Fixed(void);

		
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		Fixed	& operator=(Fixed const &f);
};

#endif
