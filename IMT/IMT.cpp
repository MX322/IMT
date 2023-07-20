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

	ConsoleOut << "��� ��� - " << imt.Calulate() << std::endl;

	if (imt.Calulate() < 18.5)
	{
		ConsoleOut << "������� ����� ����" << std::endl;
	
		while (imt.Calulate(m) < 18.5)
		{
			m += 0.1;
		}

		ConsoleOut << "����� ������� : " << m - imt.GetWeight() << " ��" << std::endl;
	}
	
	else if (imt.Calulate() >= 18.5 && imt.Calulate() < 25)
	{
		ConsoleOut << "���������� ����� ����" << std::endl;
	}

	else if (imt.Calulate() >= 25 && imt.Calulate() < 30)
	{
		ConsoleOut << "���������� ����� ����" << std::endl;

		while (imt.Calulate(m) > 25)
		{
			m -= 0.1;
		}

		ConsoleOut << "����� �������� : " << imt.GetWeight() - m << " ��" << std::endl;

	}

	else if (imt.Calulate() >= 30 && imt.Calulate() < 35)
	{
		ConsoleOut << "�������� I �������" << std::endl;

		while (imt.Calulate(m) > 25)
		{
			m -= 0.1;
		}

		ConsoleOut << "����� �������� : " << imt.GetWeight() - m << " ��" << std::endl;
	}

	else if (imt.Calulate() >= 35 && imt.Calulate() < 40)
	{
		ConsoleOut << "�������� II �������" << std::endl;

		while (imt.Calulate(m) > 25)
		{
			m -= 0.1;
		}

		ConsoleOut << "����� �������� : " << imt.GetWeight() - m << " ��" << std::endl;
	}

	else
	{
		ConsoleOut << "�������� III �������" << std::endl;
		ConsoleOut << "����� ������ ������!!! : " << std::endl;
	}

	return ConsoleOut;
}