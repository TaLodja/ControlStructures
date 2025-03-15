#include <iostream>
using namespace std;

#define SPACE_BETWEEN	8

void main()
{
	setlocale(LC_ALL, "");
	int h;
	cout << "¬ведите высоту треугольника: "; cin >> h;
	long long int nf = 1;
	cout.width(SPACE_BETWEEN/2*(h+1));
	cout << "";
	cout << "   " << 1 << "\n";
	for (int n = 1; n < h; n++)
	{
		nf *= n;
		long long int mf = 1;
		for (int i = 0; i < h-n; i++) cout << "    ";
		cout.width(SPACE_BETWEEN);
		cout << 1 /* << "       "*/;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			long long int nmf = 1;
			for (int nm = 1; nm <= n - m; nm++)
			{
				nmf *= nm;
			}
			cout.width(SPACE_BETWEEN);
			cout << nf / mf / nmf /* << "       "*/;
		}
		cout << endl;
	}
}
