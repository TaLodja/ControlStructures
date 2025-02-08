#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Palindrome" << endl;
	int number;				//Число, вводимое с клавиатуры
	int reverse = 0;		//Число, записанное в обратном порядке
	cout << "Введите число: "; cin >> number;
	int buffer = number;	//Копия числа, введенного с клавиатуры
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10; //Получаем младший разряд числа
		buffer /= 10;			// Убираем младший разряд
	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse) cout << "Число является Палиндромом!" << endl;
	else cout << "Обычное число!" << endl;
}