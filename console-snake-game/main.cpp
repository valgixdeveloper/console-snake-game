#include "header.h"

bool gameover;
const int width, height = 20;
int x, y, fX, fY, score;

enum eDir
{
	STOP = 0,
	UP,
	DOWN,
	RIGHT,
	LEFT
};

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
	x, y = STOP;
	fX = rand() % width;
	fY = rand() % height;
	score = 0;
}

void draw()
{

}

void input()
{

}

void logic()
{

}