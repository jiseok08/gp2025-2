#pragma once

#include <iostream>

using namespace std;

class Accessory
{
public:
	Accessory();

	virtual void Effect() = 0;

	virtual ~Accessory();
};

