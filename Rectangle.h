#pragma once
#include "IShape.h"
#include <stdio.h>

class Rectangle : public IShape
{
public:
	void size() override;

	void draw() override;

private:
	float width_ = 4.0f;
	float height_ = 2.0f;

	float area_ = 0.0f;
};
