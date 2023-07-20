#include "User.h"


void User::SetWeight(float _weight)
{
	this->_weight = _weight;
}

void User::SetHeight(float _height)
{
	this->_height = _height / 100;
}

float User::GetWeight()
{
	return _weight;
}

float User::GetHeight()
{
	return _height;
}


std::istream& operator>>(std::istream& ConsoleIn, User& user)
{
	float weight;
	std::cout << "¬ведите свой вес: ";
	ConsoleIn >> weight;
	user.SetWeight(weight);

	float height;
	std::cout << "¬ведите свой рост: ";
	ConsoleIn >> height;
	user.SetHeight(height);

	return ConsoleIn;
}

