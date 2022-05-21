#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <string>
#include <iostream>

template < typename T >
class	Array {

	private:

		T 		*array;
		size_t 	_size;

	public:

		Array ( void ) : array(NULL), _size(0) {}
		Array ( unsigned int n ) : _size(n) {
			this->array = new T[n];
		};
		Array ( const Array & var ) {
			*this = var;
		}
		~Array ( void ) {}

		Array & operator=(Array const &ar) {
			this->array = ar.array;
			return *this;
		}

		T & operator[](int index) {
			if (index >= this->size() || index < 0)
			{
				std::cout << index << std::endl;
				throw std::exception();
			}
			return this->array[index];
		}

		size_t size(void) const {
			return this->_size;
		}
};

#endif
