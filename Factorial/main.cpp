#include <iostream>
using namespace std;
#define FACTORIAL
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� �����, ��������� �������� ���� ����������: ";
	double a;
	double f = 1;
	cin >> a;
	if ((a > 0) && (a - int(a) == 0))
	{
		for (int i = 1; i <= a; i++)
		{
			f *= i;
		}
		cout << a << "! = " << f << endl;
	}
	else cout << "������ ��������� ���������!" << endl;
}