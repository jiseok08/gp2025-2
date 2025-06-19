#include "Firebat.h"
#include <iostream>

using namespace std;

Firebat::Firebat()
{
	health = 50;
}

void Firebat::Attack()
{
	cout << "Firebat Attack" << endl;
}

void Firebat::Stat()
{
	cout << "FIrebat Health : " << health << endl;
}

Firebat::~Firebat()
{
}
