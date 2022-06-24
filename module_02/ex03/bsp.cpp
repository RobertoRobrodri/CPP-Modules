#include "Point.hpp"

Fixed	calculate_distance(Point const &A, Point const &B)
{
	Fixed distance((A.getX() - B.getX()) + (A.getY() - B.getY()));
}

bool bsp(Point const &v_1, Point const &v_2, Point const &v_3, Point const &is_in) {
	if (is_in == v_1 || is_in == v_2 || is_in == v_3)
		return false;
	return true;
}