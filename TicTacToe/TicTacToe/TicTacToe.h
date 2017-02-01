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
	string grid_value; //Holds x and o
	bool HasGameBegan;
	bool IsPlayer1 = true; //to check if it's player 1 or not
	int InputCounter=0;
	bool GameOver = false;

	void WelcomeScreen();
	int PrintGameScreen();
	void RecieveInput(); 
	int AssignValues(int grid_number);
	int GameLogic();
	void PrintWinner(); //Print the winner
};
	

