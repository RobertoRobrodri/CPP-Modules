
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacinto <jacinto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:15:25 by jacinto          #+#    #+#             */
/*   Updated: 2022/03/03 15:58:16 by jacinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <string>
#include <iostream>

class	mutantstack {

	private:

	public:

		mutantstack ( void );
		mutantstack ( std::string str );
		mutantstack ( const mutantstack & var );
		~mutantstack ( void );
};

#endif
