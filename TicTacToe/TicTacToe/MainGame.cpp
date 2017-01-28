#include "TicTacToe.h"

void TicTacToe::PrintGameScreen() {
		cout << "The Game Begins" << endl;
	}

int main()
{
	TicTacToe myGame;
	myGame.PrintGameScreen();
	system("pause");
	return 0;
}