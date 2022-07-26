# ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template < typename T >
void	iter(T* array, size_t const length, void (*f) (T const))
{
	if (!f)
		return ;
	for (size_t i = 0; i < length; i++)
	{
		f(array[i]);
	};
}

#endif
