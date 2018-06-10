
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "cell.hpp"
#include "View.hpp"

int main()
{
	while (1)
	{
		GetStdHandle(STD_OUTPUT_HANDLE);
		cout << "      Welcome to Ceil Life" << endl;
		cout << "Please choose the view" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "input 0 is three ceil a line" << endl;
		cout << "input 1 is static view" << endl;
		cout << "input 2 I will give you a flower" << endl;
		cout << "input 3 you can see a space ship" << endl;
		cout << "input 4 is a oscillator" << endl;
		cout << "input 5 If you want to see a random world" << endl;
		cout << "input else will exit!" << endl;
		int choose;
		vector<vector<int> > input;
		cin >> choose;
		InitInput(choose, input);
		if (choose == -1)
			break;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_BLUE);
		CellMar solution(input);
		int speed;
		cout << endl << "Please input the speed what you want ? unit is ms!" << endl;
		cin >> speed;
		while (!_kbhit())
		{
			system("cls");
			solution.MyPrint();
			Sleep(speed);
			solution.life();
		}
		system("cls");
	}
	return 0;
}

