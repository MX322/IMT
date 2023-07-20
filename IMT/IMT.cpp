#include "IMT.h"


float IMT::Calulate()
{
	return _user.GetWeight() / (_user.GetHeight() * _user.GetHeight());
}

float IMT::Calulate(float weight)
{
	return weight / (_user.GetHeight() * _user.GetHeight());
}

float IMT::GetWeight()
{
	return _user.GetWeight();
}



std::ostream& operator<<(std::ostream& ConsoleOut, IMT& imt)
{
	float m = imt.GetWeight();

	ConsoleOut << "Ваш ИМТ - " << imt.Calulate() << std::endl;

	if (imt.Calulate() < 18.5)
	{
		ConsoleOut << "Дефицит массы тела" << std::endl;
	
		while (imt.Calulate(m) < 18.5)
		{
			m += 0.1;
		}

		ConsoleOut << "Нужно набрать : " << m - imt.GetWeight() << " кг" << std::endl;
	}
	
	else if (imt.Calulate() >= 18.5 && imt.Calulate() < 25)
	{
		ConsoleOut << "Нормальная масса тела" << std::endl;
	}

	else if (imt.Calulate() >= 25 && imt.Calulate() < 30)
	{
		ConsoleOut << "Избыточная масса тела" << std::endl;

		while (imt.Calulate(m) > 25)
		{
			m -= 0.1;
		}

		ConsoleOut << "Нужно сбросить : " << imt.GetWeight() - m << " кг" << std::endl;

	}

	else if (imt.Calulate() >= 30 && imt.Calulate() < 35)
	{
		ConsoleOut << "Ожирение I степени" << std::endl;

		while (imt.Calulate(m) > 25)
		{
			m -= 0.1;
		}

		ConsoleOut << "Нужно сбросить : " << imt.GetWeight() - m << " кг" << std::endl;
	}

	else if (imt.Calulate() >= 35 && imt.Calulate() < 40)
	{
		ConsoleOut << "Ожирение II степени" << std::endl;

		while (imt.Calulate(m) > 25)
		{
			m -= 0.1;
		}

		ConsoleOut << "Нужно сбросить : " << imt.GetWeight() - m << " кг" << std::endl;
	}

	else
	{
		ConsoleOut << "Ожирение III степени" << std::endl;
		ConsoleOut << "Нужно СРОЧНО ХУДЕТЬ!!! : " << std::endl;
	}

	return ConsoleOut;
}