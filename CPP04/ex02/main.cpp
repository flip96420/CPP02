#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	int i;
	Animal	*animals[20];

	i = 0;
	while (i < 20)
	{
		if (i < 10)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		i++;
	}
	i = 0;
	while (i < 20)
	{
		delete animals[i];
		i++;
	}
	return (0);
}