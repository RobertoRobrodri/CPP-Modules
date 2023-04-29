#include "PmergeMe.hpp"

bool is_numeric (std::string str) {
	for (std::size_t i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]) == 0)
			return 0;
	}
	return 1;
}

// bool	is_positive_integer(char *&str)
// {
// 	long int result = strtol(str, NULL, 10);
// 	if ( result < 0L|| result > INT_MAX)
// 		return 0;
// 	return 1;
// }

bool	parse_args(int argc, char **&argv)
{
	for (int i = argc - 1; i >= 1; i--)
	{
		if (is_numeric(argv[i]) == 0)
			return 0;
		// if (is_positive_integer(argv[i]) == 0)
		// 	return 0;
	}
	return 1;
}

int main ( int argc, char **argv)
{
	PmergeMe merge;
	clock_t timer;

	
	if (argc > 2 && parse_args(argc, argv))
	{
		for (int i = argc - 1; i >= 1; i--)
			merge._list.push_front(atoi(argv[i]));
		merge._list.unique();
		for (std::list<int>::iterator it = merge._list.begin(); it != merge._list.end(); it++)
			merge._deck.push_back(*it);
		std::cout << "Before sorting... " << std::endl;
		std::cout << merge << std::endl;
		timer = clock();
		merge._list = sort_list(merge._list);
		std::cout << "Time wasted... " << static_cast<double>(timer) / CLOCKS_PER_SEC << std::endl;
		timer = clock();
		merge._deck = sort_deck(merge._deck);
		std::cout << "Time wasted... " << static_cast<double>(timer) / CLOCKS_PER_SEC << std::endl;
		std::cout << "After sorting... " << std::endl;
		std::cout << merge << std::endl;
	}
	else
		std::cout <<  "Error" << std::endl;
	return 0;
}