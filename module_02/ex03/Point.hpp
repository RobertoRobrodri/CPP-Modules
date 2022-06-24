#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class	Point {

	private:

		Fixed const x;
		Fixed const y;

	public:

		Point ( void );
		Point ( const float &x_1, const float &y_1 );
		Point ( const Point & var );
		~Point ( void );

		Fixed getX( void ) const;
		Fixed getY( void ) const;

		Point & operator=( Point const &p);
		bool operator==(Point const &p) const;
};
bool bsp(Point const &v_1, Point const &v_2, Point const &v_3, Point const &is_in);
#endif
