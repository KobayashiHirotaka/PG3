#pragma once
#include <stdio.h>
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	~Cat();

	void Cry()override;
};

