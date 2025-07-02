#include "Character.h"

Character::Character()
{
	cout << "Created Character" << '\n';
}

void Character::Partner(const weak_ptr<Character>& pointer)
{
	weakPointer = pointer;
}

Character::~Character()
{
	cout << "Release Character" << '\n';
}

