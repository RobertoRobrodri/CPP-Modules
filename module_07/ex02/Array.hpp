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
		Array ( const Array & var ) : array(NULL) {	
			*this = var;
		}
		~Array ( void ) {
			delete[] this->array;
		}

		Array & operator=(Array const &ar) {
			if (this != &ar)
			{
				this->_size = ar._size;
				if (this->array != NULL)
					delete[] this->array;
				this->array = new T[ar._size];
				for (int i = 0; i < this->_size; i++)
					this->array[i] = ar.array[i];
			}
			return *this;
		}

		T & operator[](int index) {
			if (index >= this->size() || index < 0)
				throw std::exception();
			return this->array[index];
		}

		size_t size(void) const {
			return this->_size;
		}
};

#endif
