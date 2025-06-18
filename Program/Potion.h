#pragma once
#include "Consumable.h"
class Potion : public Consumable
{
protected:
	int health;

public:
	Potion();
	~Potion();
};

