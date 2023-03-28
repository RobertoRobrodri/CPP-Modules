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
    //btc.get_values();
    std::map<std::tm,int>::iterator it;
    for (it=btc._data.begin(); it!=btc._data.end(); ++it)
		btc.get_unix_date((*it).first);
    delete &values;
    delete &data;
    return 0;
}