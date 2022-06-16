#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

template < typename T >
int	easyfind( T &var, int const &i )
{
	typename T::iterator iter;

	iter = std::find(var.begin(), var.end(), i);
	return *iter;
}

#endif
