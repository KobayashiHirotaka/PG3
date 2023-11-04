#include "IAnimal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	IAnimal* animals[2];
	animals[0] = new Dog();
	animals[1] = new Cat();

	for (int i = 0; i < 2; i++)
	{
		animals[i]->Cry();
	}

	return 0;
}