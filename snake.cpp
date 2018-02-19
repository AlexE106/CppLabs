#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <fstream> 
using namespace std;

bool gameOver;
const int width = 61;
const int height = 21;
int x, y, foodx, foody, score;
int tailX[100], tailY[100], ntail;
char nickname[255];
enum eDirecrion { stop = 0, Left, Righr, Up, Down };
eDirecrion dir;

void login() {

	cout << "Enter name ";
	cin >> nickname;
	Sleep(1000);
	cout << "READY ";
	Sleep(2000);
	cout << "PLAYER ";
	Sleep(500);
	cout << "ONE" << endl;
	Sleep(1000);
	cout << "3" << endl;
	Sleep(1000);
	cout << "2" << endl;
	Sleep(1000);
	cout << "1";
	Sleep(1000);
	system("cls");
}

void death() {
	system("cls");
	for (int i = 0; i <= 6; i++)
		cout << endl;
	for (int j = 0; j <= 20; j++)
		cout << " ";
	cout << "GAME OVER" << endl;
	for (int j = 0; j <= 20; j++)
		cout << " ";
	cout << "SCORE: " << score;
	Sleep(5000);
}

void set() {

	gameOver = false;
	dir = stop;
	x = 31;
	y = 11;
	foodx = rand() % width;
	foody = rand() % height;
}

void draw() {
	system("cls");
	for (int i = 0; i <= width; i++)
		cout << "#";
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0 || j == width - 1)
				cout << "#";
			if (i == y && j == x)
				cout << "0";
			else if (i == foody && j == foodx)
				cout << "$";
			else {
				bool print = false;
				for (int k = 0; k < ntail; k++) {
					if (tailX[k] == j&&tailY[k] == i) {
						print = true;
						cout << "o";
					}
				}
				if (!print)
					cout << " ";
			}
		}
		cout << endl;
	}
	for (int i = 0; i <= width; i++)
		cout << "#";
	cout << endl;
	cout << "Score " << score << endl;
}

void input() {
	if (_kbhit()) {
		switch (_getch())
		{
		case 'a':
			dir = Left;
			break;
		case 'd':
			dir = Righr;
			break;
		case 's':
			dir = Down;
			break;
		case 'w':
			dir = Up;
			break;
		}
	}

}

void logic() {
	int prevX = tailX[0], prevY = tailY[0], prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;
	for (int i = 1; i<ntail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (dir) {

	case Left:
		x--;
		break;
	case Righr:
		x++;
		break;
	case Up:
		y--;
		break;
	case Down:
		y++;
		break;
	}
	if (x == width - 1 || x == -1 || y == height || y == -1)
		gameOver = true;
	for (int i = 0; i < ntail; i++) {
		if (tailX[i] == x && tailY[i] == y)
			gameOver = true;
	}
	if (x == foodx && y == foody) {
		score++;
		foodx = rand() % width;
		foody = rand() % height;
		ntail++;
	}
}


int main() {
	login();
	set();
	while (!gameOver) {
		input();
		logic();
		draw();
	}
	death();
	ofstream text("table.txt", ios_base::app);
	text << nickname << '\0' << " ";
	text << score << endl;
	text.close();
	return 0;
}