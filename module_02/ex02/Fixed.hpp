#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>
# include <ostream>
# include <cmath>

class	Fixed {

	private:

		int					_fixed_point;
		static const int	_f_bits = 8;

	public:

		Fixed(int const i);
		Fixed(float const f);
		Fixed(void);
		Fixed(Fixed const &f);
		~Fixed(void);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		Fixed	& operator=(Fixed const &f);
	//	Arithmetic operations
		Fixed	operator+(Fixed const &f) const;
		Fixed	operator-(Fixed const &f) const;
		Fixed	operator*(Fixed const &f) const;
		Fixed	operator/(Fixed const &f) const;

	//	Comparison operations
		bool	operator>(Fixed const &f) const;
		bool	operator<(Fixed const &f) const;
		bool	operator>=(Fixed const &f) const;
		bool	operator<=(Fixed const &f) const;
		bool	operator==(Fixed const &f) const;
		bool	operator!=(Fixed const &f) const;

		//Pre && Pos Increment & Decrement
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream	& operator<<(std::ostream &os, const Fixed &f);

#endif
