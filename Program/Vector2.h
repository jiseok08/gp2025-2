#pragma once
#include <iostream>

using namespace std;

class Vector2
{
private:
	int x;
	int y;
public:
	Vector2() = default;

	Vector2(int x, int y);

	void Coordinate(int x, int y);
	
	const int & X();

	const int & Y();

	Vector2 & operator + (const Vector2 & vector2);
	Vector2& operator - (const Vector2& vector2);
	Vector2& operator * (const Vector2& vector2);
	Vector2& operator / (const Vector2& vector2);
	Vector2& operator % (const Vector2& vector2);

	Vector2& opreator +;
};

