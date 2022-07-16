#ifndef WHATEVER_HPP
#define WHATEVER_HPP
# include <iostream>
# include <string>

template < typename T >
T const & max ( T const &x, T const &y)
{
	return y>=x ? y : x;
}

template < typename T >
T const & min ( T const &x, T const &y)
{
	return y<=x ? y : x;
}

template < typename T >
void swap( T &x, T &y)
{
	T	aux;

	aux = x;
	x = y;
	y = aux;
}

#endif
