#include "Point.hpp"

Fixed	calculate_area(Point const &v_1, Point const &v_2, Point const &v_3)
{
	float	area;

	area = (v_1.getX() * (v_2.getY() - v_3.getY()) + 
			v_2.getX() * (v_3.getY() - v_1.getY()) +
			v_3.getX() * (v_1.getY() - v_2.getY())) / 2.0f;
	if (area < 0)
		area = area * -1;
	return area;
}

bool bsp(Point const &v_1, Point const &v_2, Point const &v_3, Point const &is_in) {
	if (is_in == v_1 || is_in == v_2 || is_in == v_3)
		return false;
	Fixed Total_Area = calculate_area(v_1, v_2, v_3);
	Fixed Area_1 = calculate_area(is_in, v_2, v_3);
	Fixed Area_2 = calculate_area(v_1, is_in, v_3);
	Fixed Area_3 = calculate_area(v_1, v_2, is_in);
	std::cout << Total_Area << std::endl;
	return Total_Area == Area_1 + Area_2 + Area_3;
}