#include "TicTacToe.h"

void TicTacToe::PrintGameScreen() 
{
	grid[0] = 1;
	cout << grid[0]<<endl;
}

void TicTacToe::WelcomeScreen()
{
	cout << "TIC TAC TOE" << endl;
	cout << "Player 1 - X \nPlayer 2 - O" << endl;
	PrintGameScreen();

}

int TicTacToe::GameLogic()
{

	return 0;
}

int main()
{
	TicTacToe myGame;
	myGame.WelcomeScreen();
	system("pause");
	return 0;
}