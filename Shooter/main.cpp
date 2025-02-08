#include <iostream>
#include <conio.h>
using namespace std;
//#define SHOOTER
//#define SHOOTER_POST_IF_ELSE
#define SHOOTER_POST_SWITCH

#define Enter 13
#define Escape 27

#define UpArrow		72
#define DownArrow	80
#define LeftArrow	75
#define RightArrow	77


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef SHOOTER
	char key;
	cout << "==========================================" << endl;
	cout << "||\tÊëàâèøà\t||\tÄåéñòâèå\t||" << endl;
	cout << "==========================================" << endl;
	while (true)
	{
		cout << "||\t";
		key = _getch();
		switch (key)
		{
		case ('w'): cout << key << "\t||\t" << "ÂÏÅÐÅÄ\t\t||" << endl; break;
		case ('s'): cout << key << "\t||\t" << "ÍÀÇÀÄ\t\t||" << endl; break;
		case ('a'): cout << key << "\t||\t" << "ÂËÅÂÎ\t\t||" << endl; break;
		case ('d'): cout << key << "\t||\t" << "ÂÏÐÀÂÎ\t\t||" << endl; break;
		case (' '): cout << "Space" << "\t||\t" << "ÏÐÛÆÎÊ\t\t||" << endl; break;
		case (char(13)): cout << "Enter" << "\t||\t" << "ÎÃÎÍÜ\t\t||" << endl; break;
		case (char(27)): cout << "Escape" << "\t||\t" << "ÂÛÕÎÄ\t\t||" << endl; break;
		default: cout << "Íàæàëè íåâåðíóþ êëàâèøó! Äåéñòâèå íå ìîæåò áûòü ñîâåðøåíî!" << endl;
		}
		cout << "------------------------------------------" << endl;
	}
#endif // SHOOTER
#ifdef SHOOTER_POST_IF_ELSE
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;

		if (key == 'w' || key == 'W' || key == UpArrow) cout << "Âïåðåä" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow) cout << "Íàçàä" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow) cout << "Âëåâî" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow) cout << "Âïðàâî" << endl;
		else if (key == ' ') cout << "Ïðûæîê" << endl;
		else if (key == Enter) cout << "Îãîíü" << endl;
		else if (key != -32 && key != Escape) cout << "Error" << endl;

	} while (key != Escape);
#endif // SHOOTER_POST_IF_ELSE
#ifdef SHOOTER_POST_SWITCH
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow:
		case 'w':
		case 'W': cout << "Âïåðåä" << endl; break;
		case DownArrow:
		case 's':
		case 'S': cout << "Íàçàä" << endl; break;
		case LeftArrow:
		case 'a':
		case 'A': cout << "Âëåâî" << endl; break;
		case RightArrow:
		case 'd':
		case 'D': cout << "Âïðàâî" << endl; break;
		case ' ': cout << "Ïðûæîê" << endl; break;
		case Enter: cout << "Îãîíü" << endl; break;
		case Escape: cout << "Âûõîä" << endl;
		case -32: break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
#endif // SHOOTER_POST_SWITCH
}