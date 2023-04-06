#include "PmergeMe.hpp"

int main ( int argc, char **argv)
{
	PmergeMe merge;
	clock_t timer;

	// TODO parse input
	if (argc > 2)
	{
		for (int i = argc - 1; i >= 1; i--)
		{
			merge._list.push_front(atoi(argv[i]));
			merge._deck.push_front(atoi(argv[i]));
		}
		merge._list.unique();
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
	return 0;
}