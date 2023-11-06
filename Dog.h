#pragma once
#include <stdio.h>
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();
	~Dog()override;

	void Cry()override;
};

