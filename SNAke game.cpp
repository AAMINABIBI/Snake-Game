// SNAke game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<windows.h>

# define width 50
#define Height 25

using namespace std;

int x = 10; int y = 10;
void board()
{
	for (int i = 0; i < Height; i++)
	{
		cout << "\t\t#";
		for (int j = 0; j < width - 2; j++)
		{
			if (i == 0 || i == Height-1)

				cout << "#";

			else if (i == y&& j == x)

				cout << "0";

			else cout << " ";

		}
		cout << "#\n";
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	while (true)
	{
		board();
		x++;

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0, 0
	});
	}
	return 0;
}

