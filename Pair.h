#pragma once
template <class Type1, class Type2>

class Pair
{
public:

	Pair(Type1 value1, Type2 value2) : value1(value1), value2(value2){}

	Type1 Min()
	{
		if (value1 < value2) 
		{
			return value1;
		}

		return static_cast<Type2>(value2);
	}

private:
	Type1 value1;
	Type2 value2;
};
