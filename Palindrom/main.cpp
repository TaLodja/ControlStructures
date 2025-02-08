#include <iostream>
using namespace std;
#define TAB "\t"
//#define TASK_2
//#define TASK_3

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef TASK_2
	cout << "Данный калькулятор предназначен для выполнения арифметических действий над целыми числами\n"
		"Введите числа a,b и действие, которое необходимо совершить над ними, например: \"2+3\"." << endl;
	cout << TAB << "+ - если числа необходимо сложить, \n"
		<< TAB << "- - если из первого числа надо вычесть второе,\n"
		<< TAB << "* - если числа необходимо перемножить,\n"
		<< TAB << "/ - если первое число необходимо разделить на второе,\n"
		<< TAB << "% - если требуется найти остаток от деления первого числа на второе.\n" << endl;
	int a, b;
	char Operator;
	cin >> a;
	cin >> Operator;
	cin >> b;
	if (Operator == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (Operator == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (Operator == '*')
	{
		cout << a << " x " << b << " = " << a * b << endl;
	}
	else if (Operator == '/')
	{
		cout << a << " / " << b << " = " << (double)a / b << endl;
	}
	else if (Operator == '%')
	{
		cout << a << " % " << b << " = " << a % b << endl;
	}
	else cout << "Действие указано не верно!" << endl;
#endif // TASK_2
#ifdef TASK_3
	int NumbeR, RebmuN = 0, Position;
	cout << "Введите целое число: "; cin >> NumbeR; //Например, 12321
	int i = NumbeR;
	if (NumbeR > 0)
	{
		while (i > 0)
		{										//i = 12321	>0			i = 1232 >0				i = 123 >0					i = 12 >0			i = 1 >0					i = 0
			Position = i % 10;					//Position = 1			Position = 2			Position = 3			Position = 2			Position = 1
			RebmuN = RebmuN * 10 + Position;	//RebmuN = 0*10+1 = 1	RebmuN = 1*10+2 = 12	RebmuN = 12*10+3 = 123	RebmuN = 123*10+2=1232	RebmuN = 1232*10+1=12321
			i = i / 10;							//i = 12321/10 = 1232	i = 1232/10 = 123		i = 123/10 = 12			i = 12/10 = 1			i = 1/10 = 0
		}
		cout << "Число наоборот: " << RebmuN << endl;
		if (NumbeR == RebmuN) cout << "Число " << NumbeR << " является Палиндромом." << endl;
		else cout << "Число " << NumbeR << " не является Палиндромом." << endl;
	}
	else cout << "Введите положительное целое число" << endl;
#endif // TASK_3
}