#include <iostream>
#include <windows.h>

using namespace std;
using std::cout;
using std::cin;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192	
#define LOWER_RIGHT_ANGLE	(char)217
#define HORIZONTAL_LINE		(char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			"\xDB\xDB"
#define BLACK_BOX			"  "

//#define WHITE_BOX			(char)219
//#define BLACK_BOX			(char)32

//#define ASCII

//#define SQUARE
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define TRIANGLE_5
//#define RHOMBUS
//#define SQUARE_P_M
//#define CHESS_BOARD
//#define HARD_CHESS
#define TRIANGLE_OF_PASCAL

double factorial(int n)
{
	double f = 1;
	for (int i = 1; i <= n; i++) f *= i;
	return f;
}

void main()
{
	setlocale(LC_ALL, "");
	cout << "Geometry" << endl;
	
	int n;
	
#ifdef SQUARE
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif // SQUARE

#ifdef TRIANGLE_2
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		/*for (int j = 0; j < n; j++)
		{
			if (i <= j) cout << "* ";
			else cout << "  ";
		}*/
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_4

#ifdef TRIANGLE_5
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n-1; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		/*for (int j = 0; j < n; j++)
		{
			if (i + j >= n - 1) cout << "* ";
			else cout << "  ";
		}*/
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_5

#ifdef RHOMBUS
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n*2; i++)
	{
		for (int j = 0; j < n*2; j++)
		{
			if (i == (j+n) || j == (i + n)) cout << "\\";
			else if (i == (n - j - 1) || (i-n==(n*2-j-1))) cout << "/";
			else cout << " ";
		}
		/*for (int j = 0; j < n; j++)
		{
			if ((j < n / 2) && (j + i == n / 2 - 1)) cout << "/";
			else if ((j >= n / 2) && (j == i + n / 2)) cout << "\\";
			else if ((j < n / 2) && (j == i - n / 2)) cout << "\\";
			else if ((j >= n / 2) && (j + i - n / 2 == n - 1)) cout << "/";
			else cout << " ";
		}*/
		cout << endl;
	}
#endif // RHOMBUS

#ifdef SQUARE_P_M
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i+j) % 2 == 0) cout << "+ "; else cout << "- ";
			//if (i % 2 == j % 2) cout << "+ "; else cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	cout << endl;
#endif // SQUARE_P_M

#ifdef ASCII
	for (int i = 176; i < 224; i++)
	{
		/*if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";*/
		cout << i << "\t" << (char)i << endl;
		cout << endl;
	}
#endif // ASCII

#ifdef CHESS_BOARD
	cout << "¬ведите размер доски: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C"); // устанавливает кодировку по умолчанию
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n) cout << VERTICAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}
	/*cout << " ";
	for (int i = 0; i < n * 2 + 2; i++) cout << "_";
	cout << endl;
	cout << "|";
	for (int i = 0; i < n * 2 + 2; i++) cout << " ";
	cout << "|" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "| ";
		for (int j = 0; j < n; j++)
		{
			if ((i % 2 != 0) && (j % 2 == 0)) cout << "  ";
			else if ((i % 2 == 0) && (j % 2 != 0)) cout << "  ";
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ((15 << 4) | 7));
				cout << "  ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			}
		}
		cout << " |" << endl;
	}
	cout << "|";
	for (int i = 0; i < n * 2+2; i++) cout << "_";
	cout << "|";*/
#endif // CHESS_BOARD
	
#ifdef HARD_CHESS
	cout << "¬ведите размер доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int g = 0; g < 5; g++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((i % 2 != 0) && (j % 2 == 0) || (i % 2 == 0) && (j % 2 != 0)) for (int j=0; j<5; j++) cout << "  ";
				else for (int j = 0; j < 5; j++) cout << "+ ";
			}
			cout << endl;
		}
	}
#endif // HARD_CHESS

#ifdef TRIANGLE_OF_PASCAL // до 20 строк выводит более-менее аккуратно
	
	cout << "¬ведите число строк треугольника ѕаскал€: "; cin >> n;
	double N;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++) cout << "   ";
		for (int j = 0; j <= i; j++)
		{
			N = factorial(i) / (factorial(i - j) * factorial(j));
			cout << N;
			if (N >= 10 && N < 100) cout << "    ";
			else if (N >= 100 && N < 1000) cout << "   ";
			else if (N >= 1000 && N < 10000) cout << "  ";
			else if (N >= 10000) cout << " ";
			else cout << "     ";
		}
		cout << endl;
	}
#endif // TRIANGLE_OF_PASCAL

}