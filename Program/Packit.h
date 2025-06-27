#pragma once
#include<iostream>

using namespace std;

class Packit
{
private:
	int error;
public:
	Packit();
	const int & Error();
	~Packit();
};

