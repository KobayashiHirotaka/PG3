#pragma once
#include <stdio.h>
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	~Cat()override;

	void Cry()override;
};

