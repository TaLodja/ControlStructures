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
	cout << "||\t�������\t||\t��������\t||" << endl;
	cout << "==========================================" << endl;
	while (true)
	{
		cout << "||\t";
		key = _getch();
		switch (key)
		{
		case ('w'): cout << key << "\t||\t" << "������\t\t||" << endl; break;
		case ('s'): cout << key << "\t||\t" << "�����\t\t||" << endl; break;
		case ('a'): cout << key << "\t||\t" << "�����\t\t||" << endl; break;
		case ('d'): cout << key << "\t||\t" << "������\t\t||" << endl; break;
		case (' '): cout << "Space" << "\t||\t" << "������\t\t||" << endl; break;
		case (char(13)): cout << "Enter" << "\t||\t" << "�����\t\t||" << endl; break;
		case (char(27)): cout << "Escape" << "\t||\t" << "�����\t\t||" << endl; break;
		default: cout << "������ �������� �������! �������� �� ����� ���� ���������!" << endl;
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

		if (key == 'w' || key == 'W' || key == UpArrow) cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow) cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow) cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow) cout << "������" << endl;
		else if (key == ' ') cout << "������" << endl;
		else if (key == Enter) cout << "�����" << endl;
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
		case 'W': cout << "������" << endl; break;
		case DownArrow:
		case 's':
		case 'S': cout << "�����" << endl; break;
		case LeftArrow:
		case 'a':
		case 'A': cout << "�����" << endl; break;
		case RightArrow:
		case 'd':
		case 'D': cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case Enter: cout << "�����" << endl; break;
		case Escape: cout << "�����" << endl;
		case -32: break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
#endif // SHOOTER_POST_SWITCH
}