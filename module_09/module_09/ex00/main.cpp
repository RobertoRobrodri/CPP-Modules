#include "BitcoinExchange.hpp"

int main ( int argc, char** argv )
{
    if (argc <= 1 || argc > 2)
    {
        std::cout << "Args failure" << std::endl;
        return 1;
    }
    std::fstream &values  = read_file(argv[1]);
    std::fstream &data    = read_file("data.csv");
    BitcoinExchange btc(load_values(data, ','), load_values(values, '|'));
    delete &values;
    delete &data;
	//std::cout << btc << std::endl;
	btc.get_values();
    return 0;
}