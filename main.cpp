#include "IMT/IMT.h"
#include "Data/Data.h"
#include "windows.h"


Data* Data::_data = nullptr;


void Program()
{

	User user;
	std::cin >> user;
	system("cls");

	IMT imt(user);
	std::cout << imt;
	system("Pause");
	system("cls");

	std::cout << "1 - Сохранить показатели, 2 - Выгрузить сохраненные показатели, 3 - пропустить: ";
	int choice;
	do
	{
		std::cin >> choice;
		if (choice == 1)
		{
			Data* data = Data::GetInstance(user.GetHeight(), user.GetWeight());
			data->SaveToData();
			Sleep(1000);
			break;
		}

		if (choice == 2)
		{
			Data* data = Data::GetInstance(0, 0);
			User dataUser;
			try
			{
				data->RestoreFromData();
			}

			catch (std::exception ex)
			{
				std::cout << ex.what();
				return;
			}

			dataUser.SetHeight(data->GetHeight());
			dataUser.SetWeight(data->GetWeight());

			IMT dataImt(dataUser);
			std::cout << dataImt;
			system("Pause");
			system("cls");
			break;
		}

		if (choice == 3)
		{
			break;
		}

		std::cout << "неправильно введен выбор...";
		Sleep(1000);
		system("cls");

	} while (true);


}


int main()
{
	setlocale(0, "");
	Program();
}