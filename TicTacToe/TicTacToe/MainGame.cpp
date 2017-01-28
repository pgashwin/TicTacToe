#include "TicTacToe.h"

void TicTacToe::PrintGameScreen() 
{
}

void TicTacToe::WelcomeScreen()
{
	cout << "TIC TAC TOE" << endl;
	cout << "Player 1 - X \nPlayer 2 - O" << endl;
}

int TicTacToe::GameLogic()
{

}

int main()
{
	TicTacToe myGame;
	myGame.WelcomeScreen();
	myGame.PrintGameScreen();
	system("pause");
	return 0;
}