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
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature>50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 32)
	{
		cout << "������" << endl;
	}
	else if (temperature > 20)
	{
		cout << "�� ����� �����" << endl;
	}
	else if (temperature > 10)
	{
		cout << "���������" << endl;
	}
	else if (temperature > 0)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -40)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
#endif
#ifdef WHILE1
	int i = 0; //������� ����� - ��� ����������, ������� �������, 
	//������� ��� ���������� ��� ����� �������� ����
	int n; // ���������� ��������
	// �������� - ��� ����������� ���������� ���� �����
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << i << "Hello" << endl; //����������� ����
		i++;
	}
#endif // WHILE1

#ifdef WHILE_2
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (--n)
	{
		cout << n << "\t";
		// �����: cout << n << "\t"; n--;
	}
	cout << endl;
#endif // WHILE_2

	char key; //��� �������
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);
}