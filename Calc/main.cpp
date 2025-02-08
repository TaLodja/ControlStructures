#include <iostream>
using namespace std;

//#define CALC_IF_ELSE
//#define CALC_SWITCH

void main()
{
	setlocale(LC_ALL, "");
	double a, b;	//Числа, вводимые пользователем
	char s;			//Sign - знак операции
	cout << "Введите простое арифметическое выражение: ";
	cin >> a >> s >> b;
#ifdef CALC_IF_ELSE
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else cout << "Error: No operation" << endl;
#endif // CALC_IF_ELSE

#ifdef CALC_SWITCH
	switch (s)
	{
	case '+': cout << a << "+" << b << "=" << a + b << endl; break;
	case '-': cout << a << "-" << b << "=" << a - b << endl; break;
	case '*': cout << a << "*" << b << "=" << a * b << endl; break;
	case '/': cout << a << "/" << b << "=" << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
#endif // CALC_SWITCH

}