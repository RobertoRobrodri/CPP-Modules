#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

template < typename T >
int	easyfind( T const &var, int const &i )
{
	typename std::vector<T>::iterator iter;

	
	iter = std::find(var.begin(), var.end(), i);
/*	for (int j = 0; j < var.size(); j++)
	{
		if ( var[j] == i)
			return var[j];
	}*/
	return 1;
}

#endif
