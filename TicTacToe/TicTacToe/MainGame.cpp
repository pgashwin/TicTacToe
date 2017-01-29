#include "TicTacToe.h"

void TicTacToe::PrintGameScreen() 
{
	int height = 3, width = 3; //row and column
	int a = 0; // Use this to add values initially and increment in array.	
	//adding values to the array initially from 1 to 9
	for (int i = 0;i < height; i++){
		for (int j = 0; j < width; j++) {
			a++;
			grid[i][j] = a;
		}
	}

	//to display all the contents in the array
	for (int i = 0; i < height; i++) 
	{
		for (int j = 0; j < width; j++) {
			cout << grid[i][j] << ' ';
		}
		cout << endl;

	}

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