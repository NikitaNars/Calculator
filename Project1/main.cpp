#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	float num1;
	float num2;
	char symbol;
	float percent;

	std::cout << "¬ведите первое число:\n";
	std::cin >> num1;
	std::cout << "¬ведите оператор \'+\' \'-\' \'*\' \'/\' \'\%': \n";
	std::cin >> symbol;
	if (symbol == '+')
	{
		std::cout << "¬ведите второе число:\n";
		std::cin >> num2;
		std::cout << "–езультат: " << num1 + num2;
	}
	else if(symbol == '-')
	{
		std::cout << "¬ведите второе число:\n";
			std::cin >> num2;
			std::cout << "–езультат: " << num1 - num2;
	}
	else if (symbol == '*')
	{
		std::cout << "¬ведите второе число:\n";
		std::cin >> num2;
		std::cout << "–езультат: " << num1 * num2;
	}
	else if (symbol == '/')
	{
		std::cout << "¬ведите второе число:\n";
		std::cin >> num2;
		if (num2 == 0)
		{
			std::cout << "ќшибка на ноль делить нельз€!";
			return 0;
		}
		std::cout << "–езультат: " << num1 / num2;
	}
	else if (symbol == '-')
	{
		std::cout << "¬ведите второе число:\n";
		std::cin >> num2;
		std::cout << "–езультат: " << num1 - num2;
	}
	else if (symbol == '%')
	{
		std::cout << "¬ведите процент от числа:\n";
		std::cin >> percent;
		std::cout<< "–езультат: " << percent / 100 * num1;
	}
}