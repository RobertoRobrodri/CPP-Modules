#include "BitcoinExchange.hpp"

int main ( int argc, char** argv )
{
    if (argc != 2)
    {
        std::cout << "Args failure" << std::endl;
        return 1;
    }
    std::fstream &values  = read_file(argv[1]);
    try {
        if (values.rdstate() == std::fstream::failbit)
        {
            throw std::ios_base::failure("Could not open file");
        }
        std::fstream &data    = read_file("data.csv");
        BitcoinExchange btc(load_values(data, ',', 0), load_values(values, '|', 1));
        delete &values;
        delete &data;
//        std::cout << btc << std::endl;
        btc.get_values();
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}