#include "Data.hpp"

Data::Data( void ) {

  std::cout << "Default constructor called" << std::endl;
  
}

Data::Data( std::string str ) {

  std::cout << "Parameter constructor called" << std::endl;
  
}

Data::Data( const Data & var ) {

  std::cout << "Copy constructor called" << std::endl;
  
}

Data::~Data( void ) {
  
  std::cout << "Destructor constructor called" << std::endl;

}
