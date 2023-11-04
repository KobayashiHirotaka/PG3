#pragma once
#include <stdio.h>
#include "IAnimal.h"

class Cat : public IAnimal
{
public:
	Cat();
	~Cat();

	void Cry()override;
};

