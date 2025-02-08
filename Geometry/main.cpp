#include <iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE
#define RHOMB


void main()
{
	setlocale(LC_ALL, "");
	cout << "Geometry" << endl;
	
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;

#ifdef SQUARE
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

#ifdef TRIANGLE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i <= j) cout << "* ";
			else cout << "  ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j >= n-1) cout << "* ";
			else cout << "  ";
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE

#ifdef RHOMB
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i< n/2)&&(j == n / 2 - i - 1)) cout << "/";
			else if ((i<n/2)&&(j == n / 2 + i)) cout << "\\";
			else if ((i>=n/2)&&(j == n / 2 - i-1))  cout << "\\";
			else cout << " ";

			//if ((i < n / 2) && (j >= n / 2) && (i == j)) cout << "\\"; else cout << " ";
			//else if ((i >= n / 2) && (j < n / 2) && (i == j)) cout << "\\";
			//else if ((i >= n / 2) && (j >= n / 2) && (i + j == n / 2 - 1)) cout << "/";
			//else cout << " ";
		}
		cout << endl;
	}
	cout << endl;
#endif // RHOMB




}