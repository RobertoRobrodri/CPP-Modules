# ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template < typename T >
void	iter(T* array, int length, void (*f) (T const & arg))
{
	if (!f)
		return ;
	for (int i = 0; i < length; i++)
	{
		f(array[i]);
	};
}

#endif
