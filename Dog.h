#pragma once
#include <stdio.h>
#include "IAnimal.h"

class Dog : public IAnimal
{
public:
	Dog();
	~Dog();

	void Cry()override;
};

