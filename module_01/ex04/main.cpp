#include <iostream>
#include <string>
#include <fstream>

std::string	return_name(const char **filename)
{
	std::string	name(*filename);
	
	name.append(".replace");
	return name;
}

std::string	write_file(std::ifstream &file, const std::string s1, const std::string s2)
{
	std::string					read;
	std::string					buffer;
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
		buffer.append(read);
		buffer.append("\n");
	}
	return (buffer);
}

int	open_file(const char *filename, const std::string s1, const std::string s2)
{
	std::ifstream	file;
	std::string		buffer;

	file.open(filename, std::ios::in);
	if (!file)
	{
		std::cerr << "File does not exists" << std::endl;
		return (0);
	}
	else
	{
		buffer = write_file(file, s1, s2);
		file.close();
		std::ofstream	output(return_name(&filename));
		output << buffer;
		output.close();
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
		if (s1.empty() || !s1.compare(s2))
		{
			std::cerr << "Strings error" << std::endl;
			return (0);
		}
		if (!open_file(argv[1], s1, s2))
			return (0);
	}
	else
		std::cerr << "Bad arguments" << std::endl;
	return (0);
}
