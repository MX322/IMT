#pragma once
#include "fstream"

class Data
{
private:
	float _weight;
	float _height;

	Data(float weight, float height) : _weight(weight), _height(height) {};
	static Data* _data;
public:
	
	Data(Data& other) = delete;
	void operator=(const Data&) = delete;
	static Data* GetInstance(float weight, float height);

	void SaveToData();
	void RestoreFromData();

	float GetWeight();
	float GetHeight();
};

