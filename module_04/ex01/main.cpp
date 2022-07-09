# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
	const Animal* dog_1 = new Dog();
	const Animal* dog_2 = new Dog();
	const Animal* cat_1 = new Cat();
	const Animal* cat_2 = new Cat();

	Dog pipo;
	Dog pepo(pipo);
	Dog quillo;
	quillo = pipo;
	delete dog_1;
	delete dog_2;
	delete cat_1;
	delete cat_2;
	system("leaks Brain");
}
