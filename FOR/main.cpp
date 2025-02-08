#include <iostream>
using namespace std;

#define FACTORIAL
//#define ASCII

void main()
{
	setlocale(LC_ALL, "");
	//for (;;)
	//cout << "Hello FOR";
#ifdef FACTORIAL
	int n; // Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

}