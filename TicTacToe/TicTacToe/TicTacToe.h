#pragma once
#include<iostream>
#include<string>

using namespace std;

class TicTacToe
{
public:
	int height = 3, width = 3;								//row and column
	string grid[3][3];
	//int grid_number; // value selected by the user
	string grid_value = "X"; //Holds x and o
	bool HasGameBegan;

	void WelcomeScreen();
	void PrintGameScreen();
	void RecieveInput(); 
	int AssignValues(int grid_number);
	int GameLogic();

};
	

