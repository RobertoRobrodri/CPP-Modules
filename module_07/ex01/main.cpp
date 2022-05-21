#include "iter.hpp"
#include <string.h>

void	add(int &i)
{
	i++;
}

int main (void)
{
	int i[5] = {0, 1, 2, 3, 4};

	iter <int> (i, 5, print<int>);
	iter <int> (i, 5, add);
	iter <int> (i, 5, print<int>);

	char *quote = strdup("GALIO DESCIENDE LOS CIELOS");
	iter <char> (quote, strlen(quote), print<char>);
	free(quote);

	std::string more_quotes[3] = {"HOLA", "CARA", "COLA"};
	iter <std::string> (more_quotes, 3, print);
}