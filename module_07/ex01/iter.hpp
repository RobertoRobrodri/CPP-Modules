# ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template < typename T >
void	iter(T* const &array, size_t length, void (*f) (T &var))
{
	for (int i = 0; i < length; i++)
	{
		f(array[i]);
	};
}

template < typename T >
void	print(T &var)
{
	std::cout << var << std::endl;
}

#endif