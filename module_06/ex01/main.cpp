#include <string>
#include <iostream>

struct Data {
	int		x;
	int 	y;
	char 	c;
	bool 	t;
};

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

int main (void)
{
	struct Data d = (Data) {5, 10, 'a', true};
	struct Data *check = NULL;
	uintptr_t i;

	std::cout << "Dirección original: " << &d << std::endl;
	std::cout << d.x << std::endl;
	std::cout << d.y << std::endl;
	std::cout << d.c << std::endl;
	std::cout << d.t << std::endl;
	i = serialize(&d);
	std::cout << "Dirección serializada " << i << std::endl;
	check = deserialize(i);
	std::cout << "Dirección original: " << check << std::endl;
	std::cout << check->x << std::endl;
	std::cout << check->y << std::endl;
	std::cout << check->c << std::endl;
	std::cout << check->t << std::endl;
}
