#include "Data.h"
#include <iostream>
#include <exception>


Data* Data::GetInstance(float weight, float height)
{
	if (_data == nullptr) {
		_data = new Data(weight, height);
	}
	return _data;
}


void Data::SaveToData()
{
	std::ofstream file("Data/data.txt");
	if (file.is_open())
	{
		file << _height << " " << _weight << std::endl;
		
		file.close();
		std::cout << "File has been written" << std::endl;
	}
}


void Data::RestoreFromData()
{
	std::ifstream file("Data/data.txt"); 
	if (file.is_open())
	{
		file >> _weight >> _height;
		file.close();
		
		if (_weight == NULL || _height == NULL)
		{
			throw std::logic_error("error : нет сохраненный значений");
		}
	}
}


float Data::GetHeight()
{
	return _height * 100;
}

float Data::GetWeight()
{
	return _weight;
}