#include "Point.hpp"

Point::Point( void ) : x(0), y(0) {

//  std::cout << "Default constructor called" << std::endl;
  
}

Point::Point( const float &x_1, const float &y_1 ) : x(x_1), y(y_1) {

//  std::cout << "Parameter constructor called" << std::endl;
  
}

Point::Point( const Point & var ) {
  *this = var;
//  std::cout << "Copy constructor called" << std::endl;
  
}

Point::~Point( void ) {}

float Point::getX( void ) const {
  return this->x.toFloat();
}

float Point::getY( void ) const {
  return this->y.toFloat();
}


Point & Point::operator=( Point const &p ) {
  if (this == &p)
    return *this;
  const_cast<Fixed &> (this->x) = p.x;
  const_cast<Fixed &> (this->y) = p.y;
  return *this;
}

bool Point::operator==(Point const &p) const {
  return this->x == p.x && this->y == p.y;
}