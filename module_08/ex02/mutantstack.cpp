/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacinto <jacinto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:15:25 by jacinto          #+#    #+#             */
/*   Updated: 2022/03/03 15:58:16 by jacinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

mutantstack::mutantstack( void ) {

  std::cout << "Default constructor called" << std::endl;
  
}

mutantstack::mutantstack( std::string str ) {

  std::cout << "Parameter constructor called" << std::endl;
  
}

mutantstack::mutantstack( const mutantstack & var ) {

  std::cout << "Copy constructor called" << std::endl;
  
}

mutantstack::~mutantstack( void ) {
  
  std::cout << "Destructor constructor called" << std::endl;

}
