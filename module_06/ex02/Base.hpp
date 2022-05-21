
#ifndef BASE_HPP
#define BASE_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>

class	Base {

	public:

		virtual ~Base ( void );
};

class	A : public Base {

	public:

	//	virtual ~A ( void );
};

class	B : public Base {

	public:

	//	virtual ~B ( void );
};

class	C : public Base {

	public:

	//	virtual ~C ( void );
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif
