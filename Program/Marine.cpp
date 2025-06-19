#include "Marine.h"
#include <iostream>

using namespace std;

Marine::Marine()
{
	health = 100;
}

void Marine::Attack()
{
	cout << "Marine Attack" << endl;
}

void Marine::Stat()
{
	cout << "Marine Health : " << health << endl;
}

Marine::~Marine()
{
}
