#include "Packit.h"

Packit::Packit()
{
	cout << "Created Packit" << '\n';
}

const int & Packit::Error()
{
	return error;
}

Packit::~Packit()
{
	cout << "Release Packit" << '\n';
}
