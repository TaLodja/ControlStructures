#include <iostream>
#include <conio.h>
using namespace std;
using std::cout;
//#define IF_ELSE
//#define WHILE1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");

#if defined IF_ELSE
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature>50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 32)
	{
		cout << "Жарень" << endl;
	}
	else if (temperature > 20)
	{
		cout << "На улице тепло" << endl;
	}
	else if (temperature > 10)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Дубак" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -40)
	{
		cout << "Капец" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
#endif
#ifdef WHILE1
	int i = 0; //Счетчик цикла - это переменная, которая считает, 
	//сколько раз выполнился или будет выполнен цикл
	int n; // количество итераций
	// Итерация - это однократное выполнение тела цикла
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << "Hello" << endl; //бесконечный цикл
		i++;
	}
#endif // WHILE1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (--n)
	{
		cout << n << "\t";
		// можно: cout << n << "\t"; n--;
	}
	cout << endl;
#endif // WHILE_2

	char key; //код клавиши
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);
}