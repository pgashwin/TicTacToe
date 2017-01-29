#pragma once
#include<iostream>
#include<string>

using namespace std;

class TicTacToe
{
public:
	int grid[3]	;
	void PrintGameScreen();
	void WelcomeScreen();
	int GameLogic();

};


