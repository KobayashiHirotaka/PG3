#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	Animal* animals[2];
	animals[0] = new Dog();
	animals[1] = new Cat();

	for (int i = 0; i < 2; i++)
	{
		animals[i]->Cry();
	}

	delete animals[0];
	delete animals[1];

	return 0;
}