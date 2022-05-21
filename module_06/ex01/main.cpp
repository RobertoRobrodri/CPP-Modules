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
	Data d = (Data) {5, 10, 'a', true};
	Data *check = &d;

	std::cout << "Dirección original: " << check << std::endl;
	uintptr_t i;
	i = serialize(check);
	std::cout << "Dirección serializada " << i << std::endl;
	check = deserialize(i);
	std::cout << "Dirección original: " << check << std::endl;
}