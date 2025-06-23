#pragma once
#include "Accessory.h"
class Necklace : public Accessory
{
private:
	int immunity;
	const char* name;
public:
	Necklace();
	virtual void Effect() override;
	virtual ~Necklace();
};

