#include<iostream>
#include<string>

enum class Months
{
	Январь = 1,
	Февраль,
	Март,
	Апрель,
	Май,
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	
	do
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> a;
		if (a < 0 || a>12)
		{
			std::cout << "Неправильный номер!" << std::endl;
		}
		else {
			Months m = static_cast<Months>(a);
			switch (m)
			{
			case Months::Январь: {std::cout << "Январь" << std::endl; break; }
			case Months::Февраль: {std::cout << "Февраль" << std::endl; break; }
			case Months::Март: {std::cout << "Март" << std::endl; break; }
			case Months::Апрель: {std::cout << "Апрель" << std::endl; break; }
			case Months::Май: {std::cout << "Май" << std::endl; break; }
			case Months::Июнь: {std::cout << "Июнь" << std::endl; break; }
			case Months::Июль: {std::cout << "Июль" << std::endl; break; }
			case Months::Август: {std::cout << "Август" << std::endl; break; }
			case Months::Сентябрь: {std::cout << "Сентябрь" << std::endl; break; }
			case Months::Октябрь: {std::cout << "Октябрь" << std::endl; break; }
			case Months::Ноябрь: {std::cout << "Ноябрь" << std::endl; break; }
			case Months::Декабрь: {std::cout << "Декабрь" << std::endl; break; }
			}
		}
	} while (a != 0);
	std::cout << "До свидания" << std::endl;

}