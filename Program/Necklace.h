#pragma once
#include "Accessory.h"
class Necklace : public Accessory
{
private:
	int accuracy;
	const char* name;
public:
	Necklace();
	virtual void Effect() override;
	virtual ~Necklace();
};

