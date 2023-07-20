#pragma once
#include "User\User.h"

class IMT
{
private:
	User& _user;
public:
	IMT(User& user) : _user(user) {};

	float Calulate();
	float Calulate(float weight);

	float GetWeight();
	
};

std::ostream& operator<<(std::ostream& ConsoleOut, IMT& imt);