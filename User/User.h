#pragma once
#include "iostream"

class User
{
private:
	float _weight;
	float _height;

public:
	void SetWeight(float _weight);
	void SetHeight(float _height);

	float GetWeight();
	float GetHeight();
};

std::istream& operator>>(std::istream& ConsoleIn, User& user);