#include "header.h"

bool gameover;
const int width = 20;
const int height = 20;
int x, y, fX, fY, score;

enum eDir
{
	STOP = 0,
	UP,
	DOWN,
	RIGHT,
	LEFT
};

void setup();
void draw();
void input();
void logic();

int main()
{
	setup();
	while (!gameover)
	{
		draw();
		input();
		logic();
	}
	return 0;
}

void setup()
{
	gameover = false;
	x = width / 2;
	y = height / 2;
	score = 0;
}

void draw()
{
	system("cls");
	for (int x = 0; x < width +1; x++)
	{
		cout << "#";
	}
	cout << endl;

	for (int x = 0; x < height; x++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1)
				cout << "#";
			cout << " ";
		}
		cout << endl;
	}

	for (int x = 0; x < width +1; x++)
	{
		cout << "#";
	}
	cout << endl;
}

void input()
{

}

void logic()
{

}