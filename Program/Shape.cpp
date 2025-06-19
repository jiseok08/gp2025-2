#include <iostream>
#include "Shape.h";

using namespace std;

Shape::Shape()
{
	cout << "Created Shape" << endl;
}

void Shape::Volume()
{
	cout << "Shape Formula" << endl;
}

Shape::~Shape()
{
	cout << "Relese Shape" << endl;
}
;
