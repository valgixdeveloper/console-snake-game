#include "header.h"

const int width = 17;
const int height = 10;
const int max_len_snake = (width - 3) * (height - 2);

const int up = 0;
const int down = 1;
const int left = 2;
const int right = 3;

int snake_dir = up;

bool isRunning = true;

char snake = 'O';
int snake_x[max_len_snake] = { 0 };
int snake_y[max_len_snake] = { 0 };
int snake_len = 1;


int main()
{
	SetConsoleTitle(L"Snake Game by ValgixDeveloper");

	snake_x[0] = width / 2;
	snake_y[0] = height / 2;
	int time = clock();

	while (isRunning)
	{

		gotoxy(0, 0);

		cout << "Length: " << snake_len << endl;
		for (int i = 0; i < snake_len; ++i)
		{
			map[snake_y[i] * width + snake_x[i]] = snake;
		}

		cout << map;

		for (int i = 0; i < snake_len; ++i)
		{
			map[snake_y[i] * width + snake_x[i]] = ' ';
		}
	}

	return 0;
}