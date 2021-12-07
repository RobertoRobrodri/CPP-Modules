#include <iostream>
#include <string>
#include <fstream>

void	write_file(std::fstream	&file, const std::string s1, const std::string s2)
{
	std::string					read;
	std::string::size_type		pos;

	while (getline(file, read))
	{
		pos = 0;
		pos = read.find(s1, pos);
		while (pos <= read.length())
		{
			read.erase(pos, s1.length());
			read.insert(pos, s2);
			pos = read.find(s1, pos);
		}
		file << read;
	}
}	

int	open_file(const char *filename, const std::string s1, const std::string s2)
{
	std::fstream	file;

	file.open(filename, std::ios::in | std::ios::out);
	if (!file)
	{
		std::cout << "File does not exists" << std::endl;
		return (0);
	}
	else
	{
		write_file(file, s1, s2);
		file.close();
		return (1);
	}
}

int main(int argc, char **argv)
{
	std::string		s1;
	std::string		s2;

	if (argc == 4)
	{
		s1.assign(argv[2]);
		s2.assign(argv[3]);
		if (s1.empty() || s2.empty())
		{
			std::cout << "Strings empty" << std::endl;
			return (0);
		}
		if (!open_file(argv[1], s1, s2))
			return (0);
	}
	else
		std::cout << "Bad arguments" << std::endl;
	return (0);
}