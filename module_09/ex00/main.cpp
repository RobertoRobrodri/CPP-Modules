#include "BitcoinExchange.hpp"

int main ( int argc, char** argv )
{
    std::fstream         data;
    std::fstream         values;

    if (argc <= 1 || argc > 2)
    {
        std::cout << "Args failure" << std::endl;
        return 1;
    }
    values  = read_file(argv[1]);
    data    = read_file("data.csv");
    BitcoinExchange btc(load_values(data, ','), load_values(values, '|'));
    std::multimap<std::string,int>::iterator it;
    for (it=btc._values.begin(); it!=btc._values.end(); ++it)
      std::cout << (*it).first << " => " << (*it).second << '\n';
    return 0;
}