#include <iostream>
#include "circle.h"

using namespace std;

Circle::Circle()
{
	cout << "Created Circle" << endl;
}

void Circle::Volume()
{
	cout << "�� X r" << endl;
}

Circle::~Circle()
{
	cout << "Relese Circle" << endl;
}
