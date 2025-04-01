#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

//[][][][] [][][][]
int main()
{
	
	int Map[10][10] =
	{
		{1,1,1,1,1, 1,1,1,1,1},
		{1,0,0,0,0, 0,0,0,0,1},
		{1,0,0,0,0, 0,0,0,0,1},
		{1,0,0,0,0, 0,0,0,0,1},
		{1,0,0,0,0, 0,0,0,0,1},
		{1,0,0,0,0, 0,0,0,0,1},
		{1,0,0,0,0, 0,0,0,0,1},
		{1,0,0,0,0, 0,0,0,0,1},
		{1,0,0,0,0, 0,0,0,0,1},
		{1,1,1,1,1, 1,1,1,1,1}
	};

	int PlayerX = 1;
	int PlayerY = 1;
	for (;;) {
				
		for (int y = 0; y < 10; y++) {
			for (int x = 0; x < 10; x++) {
				if (x == PlayerX && y == PlayerY)
					cout << " ";
				else
					cout << Map[y][x];
			}
			cout << endl;
		}
		PlayerX++;

		_getch();
		
		system("cls");

	}

	return 0;
}