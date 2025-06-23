#include "Necklace.h"

Necklace::Necklace()
{
	immunity = 10;
	name = "Necklace";
}

void Necklace::Effect()
{
	cout << "Name : " << name << endl;
	cout << "Effect : Immunity increases by " << immunity << endl;
}

Necklace::~Necklace()
{
	cout << "Release Necklace" << endl;
}
