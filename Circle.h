#pragma once
#include "IShape.h"
#include <stdio.h>

class Circle : public IShape
{
public:
	void size() override;

	void draw() override;

private:
	float radius_ = 5.0f;

	float area_ = 0.0f;
};