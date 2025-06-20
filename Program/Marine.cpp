#include "Marine.h"
#include <iostream>

using namespace std;

Marine::Marine()
{
	health = 40;
	defense = 0;

	cout << "Created Marine" << endl;
}

void Marine::Stat()
{
	cout << "Health " << health << endl;
	cout << "Defense : " << defense << "\n" << endl;
}

Marine::~Marine()
{
	cout << "Release Marine" << endl;
}
