#include <iostream>
#include <conio.h>
#include <windows.h> // ��� ������� SetConsoleOutputCP(1251), ������� �������������, � ����� ��������� ����� ���������� ������ � �������
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define Escape 27

//#define FACTORIAL
//#define DEGREE
//#define DEGREE_POST
#define TABLE_OF_ASCII
//#define FIBONACCI
//#define FIBONACCI_POST
//#define FIBONACCI_N
//#define PRIME_NUMBERS
//#define PRIME_NUMBER_POST
//#define PERFECT_NUMBERS
//#define PERFECT_NUMBERS_POST
//#define MULTIPLICATION_TABLE
//#define MULTIPLICATION_TABLE_POST
//#define PIFAGORE_TABLE
//#define PIFAGORE_TABLE_POST

void main()
{
	setlocale(LC_ALL, "");
#ifdef FACTORIAL
	double a, f; // ���������� 'a' ����� ��� 'double' ��� ����, ����� ��� ����� ����������� ����� �� ���������� ������ ����������, �������� ��� �� ����� ����� (��� ���� ���������� 'a' - 'int')
	char key;
	do
	{
		cout << "������� �����, ��������� �������� ���� ����������: "; cin >> a;
		if ((a > 0) && (a - int(a) == 0))
		{
			f = 1;
			for (int i = 1; i <= a; i++)
			{
				f *= i;
			}
			cout << a << "! = " << f << endl;
		}
		else cout << "������ ��������� ���������!" << endl;
		cout << "\n��� ������ ������� 'Escape'." << endl;
		cout << "��� ����������� ���������� ���������� ����� ������� ����� ������.\n" << endl;
		key = _getch();
	} while (key != Escape);
#endif // FACTORIAL

#ifdef DEGREE
	int n;
	double a, N;
	char key;
	do
	{
		cout << "������� ��������� �������: "; cin >> a;
		cout << "������� ���������� �������: "; cin >> n;
		N = 1;
		if (n == 0 && a != 0) cout << a << "^" << n << " = 1" << endl;
		else if (n == 0 && a == 0) cout << "�������������� ���������." << endl;
		else if (n > 0)
		{
			for (int i = 1; i <= n; i++)
			{
				N *= a;
			}
			cout << a << "^" << n << " = " << N << endl;
		}
		else if (n < 0)
		{
			for (int i = 1; (i <= -n); i++)
			{
				N *= 1 / a;
			}
			cout << a << "^" << n << " = " << N << endl;
		}

		cout << "\n��� ������ ������� 'Escape'." << endl;
		cout << "��� ����������� ���������� ������� ����� ������� ����� �������.\n" << endl;
		key = _getch();
	} while (key != Escape);
#endif // DEGREE

#ifdef DEGREE_POST
	double a; //��������� �������
	int n; //���������� �������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << a << " ^ " << n << " = " << N;	
#endif // DEGREE POST

#ifdef TABLE_OF_ASCII
	char key;
	int N;
	cout << "\n\t\t\t\t\t\t������� ASCII-��������\n" << endl;
	for (int i = 0; i < 8 * 16; i++)
	{
		cout << "=";
	}
	cout << endl;
	for (int i = 0; i < 128; i += 16)
	{
		for (int j = 0; j < 16;j++)
		{
			N = i + j;
			key = N;
			switch (key)
			{
			case 0: cout << "|" << N << "-" << "nul" << "\t"; break;	// ��� ������
			case 7: cout << "|" << N << "-" << "bel" << "\t"; break;	// BELL (������)
			case 8: cout << "|" << N << "-" << "bs" << "\t"; break;		// Backspace (������� �� ���� ������)
			case 9: cout << "|" << N << "-" << "tab" << "\t"; break;	// TAB
			case 10: cout << "|" << N << "-" << "lf" << "\t"; break;	// Line Feed (������� ������)
			case 13: cout << "|" << N << "-" << "cr" << "\t"; break;	// Carriage Return (������� �������)
			case 27: cout << "|" << N << "-" << "esc" << "\t"; break;	// Escape
			case 32: cout << "|" << N << "-" << "sp" << "\t"; break;	// Space
			default: cout << "|" << N << "-" << key << "\t";
			}
		}
		cout << "|" << endl;
	}
	for (int i = 128; i < 256; i += 16)
	{
		for (int j = 0; j < 16;j++)
		{
			N = i + j;
			key = N;
			SetConsoleOutputCP(1251); // ��� ������ �������� � ��������� cp1251
			cout << "|" << N << "-" << key << "\t";
		}
		cout << "|" << endl;
	}
	for (int i = 0; i < 8 * 16; i++)
	{
		cout << "=";
	}
	cout << endl;
#endif // TABLE_OF_ASCII

#ifdef FIBONACCI
	int N; // �����, �� �������� ���� ������� ��� ���������
	cout << "������� ��������� ��������, �� �������� ���� ������� ��� ���������: "; cin >> N;
	cout << "\t\t\t\t��� ���������" << endl;
	int a = 0, b = 1, c; //��� ���������������� ����� ��������� � ����������� �����
	cout << a << "\t" << b << "\t";
	for (int i = b; i <= N; i += a)
	{
		c = a + b;
		cout << c << "\t";
		a = b;
		b = c;
	}
#endif // FIBONACCI

#ifdef FIBONACCI_POST
	int n;
	cout << "������� ������: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
#endif // FIBONACCI_POST
	
#ifdef FIBONACCI_N
	int N; // ���������� ����� ���� ��������, ������� ���� �������
	cout << "������� ���������� ����� ���� ��������, ������� ���� �������: "; cin >> N;
	cout << "\t\t\t\t��� ���������" << endl;
	int a = 0, b = 1, c; //��� ���������������� ����� ��������� � ����������� �����
	switch (N)
	{
	case 1: cout << a << "\t"; break;
	case 2: cout << a << "\t" << b << "\t";
	default:
	{
		cout << a << "\t" << b << "\t";
		for (int i = 2; i < N; i++)
		{
			c = a + b;
			cout << c << "\t";
			a = b;
			b = c;
		}
	}
	}
#endif // FIBONACCI_N

#ifdef PRIME_NUMBERS
	int N;
	cout << "������� �����, �� �������� ������� ������� ��� ������� �����: "; cin >> N;
	cout << "\t\t\t\t��� ������� ����� �� " << N << " ������������" << endl;
	for (int i = 1; i <= N; i++)
	{
		int del = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0) del++;
		}
		if (del == 2) cout << i << "\t";
	}

#endif // PRIME_NUMBERS

#ifdef PRIME_NUMBER_POST
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true; //������������, ��� ����� �������
		// �� ��� ����� ���������:
		for (int j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
#endif // PRIME_NUMBER_POST

#ifdef PERFECT_NUMBERS
	cout << "��� ����������� �����" << endl;
	/*for (unsigned long long i = 1; i <= ULLONG_MAX; i++)
	{
		unsigned long long sum = 0;
		for (unsigned long long j = 1; j < i; j++)
		{
			if (i % j == 0) sum += j;
		}
		if (i == sum) cout << i << "\t";
	}*/
	for (int i = 1; i <= 10000; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0) sum += j;
		}
		if (i == sum) cout << i << "\t";
	}
#endif // PERFECT_NUMBERS

#ifdef PERFECT_NUMBERS_POST
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 2; i < n; i++)
	{
		int sum = 0;
		for (int j = 1; j <= i/2; j++)
		{
			if (i % j == 0) sum += j;
		}
		if (i == sum) cout << i << "\t";
	}
#endif // PERFECT_NUMBERS_POST

#ifdef MULTIPLICATION_TABLE
	cout << "\t\t\t\t������� ���������" << endl;
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 6; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\t";
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

#ifdef MULTIPLICATON_TABLE_POST
	for (int i = 1; i <= 10; i++)
	{
		cout << "������� ��������� �� " << i << "\n";
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATON_TABLE_POST


#ifdef PIFAGORE_TABLE
	cout << "\t\t\t\t\t������� ��������" << endl;
	cout << endl;
	cout << "\t";
	for (int i = 1; i <= 10; i++)
		cout << "\t" << i;
	cout << endl;
	for (int i = 1; i <= 12 * 8; i++)
		cout << "-";
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << "   " << i << "\t|";
		for (int j = 1; j <= 10; j++)
		{
			cout << "\t" << i * j;
		}
		cout << endl;
	}
#endif // PIFAGORE_TABLE

#ifdef PIFAGORE_TABLE_POST
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif // PIFAGORE_TABLE_POST


}