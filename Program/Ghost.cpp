#include "Ghost.h"
#include <iostream>

using namespace std;

Ghost::Ghost()
{
	health = 75;
}

void Ghost::Attack()
{
	cout << "Ghost Attack" << endl;
}

void Ghost::Stat()
{
	cout << "Ghost Health : " << health << endl;
}

Ghost::~Ghost()
{
}
