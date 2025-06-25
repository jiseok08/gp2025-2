#include "Vector2.h"

Vector2::Vector2(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Vector2::Coordinate(int x, int y)
{
	this->x = x;
	this->y = y;
}


const int & Vector2::X()
{
	return x;
}


const int & Vector2::Y()
{
	return y;
}

Vector2 & Vector2::operator+(const Vector2 & vector2)
{
	Vector2 clone;

	clone.x = this->x + vector2.x;
	clone.y = this->y + vector2.y;

	return clone;
}

Vector2& Vector2::operator-(const Vector2& vector2)
{
	Vector2 clone;

	clone.x = this->x - vector2.x;
	clone.y = this->y - vector2.y;

	return clone;
}

Vector2& Vector2::operator*(const Vector2& vector2)
{
	Vector2 clone;

	clone.x = this->x * vector2.x;
	clone.y = this->y * vector2.y;

	return clone;
}

Vector2& Vector2::operator/(const Vector2& vector2)
{
	Vector2 clone;

	clone.x = this->x / vector2.x;
	clone.y = this->y / vector2.y;

	return clone;
}

Vector2& Vector2::operator%(const Vector2& vector2)
{
	Vector2 clone;

	clone.x = this->x % vector2.x;
	clone.y = this->y % vector2.y;

	return clone;
}

Vector2& Vector2::operator++(int)
{
	Vector2 temp = *this;

	x++;
	y++;

	return temp;
}

Vector2& Vector2::operator--(int)
{
	Vector2 temp = *this;

	x--;
	y--;

	return temp;
}

Vector2& Vector2::operator++()
{
	x++;
	y++;
	
	return *this;
}

Vector2& Vector2::operator--()
{
	x--;
	y--;

	return *this;
}

 

 
