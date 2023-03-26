#include "BitcoinExchange.hpp"

int main ( int argc, char** argv )
{
    BitcoinExchange btc;

    if (argc <= 1 || argc > 2)
    {
        std::cout << "Args failure" << std::endl;
        return 1;
    }
    btc.read_file(argv[1]);
    return 0;
}