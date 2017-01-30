#include "TicTacToe.h"


//First set of Items displayed when the game starts
void TicTacToe::WelcomeScreen()
{
	cout << "TIC TAC TOE" << endl;
	cout << "Player 1 - X \nPlayer 2 - O" << endl;

	int a = 0;	// Use this to add values initially and increment in array.	
	//adding values to the array initially from 1 to 9
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			a++;
			grid[i][j] = to_string(a);
		}
	}
	PrintGameScreen();
}



void TicTacToe::PrintGameScreen()
{
	
	//to display all the contents in the array
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << grid[i][j] << ' ';
		}
		cout << endl;
	}
	RecieveInput();
}


//Take input from the user
void TicTacToe::RecieveInput() {
	int input;
	cin >> input;
	AssignValues(1);
}

int TicTacToe::AssignValues(int grid_number) {
	switch (grid_number) {
	case 1: grid[0][0] = grid_value;
		cout << "Cell 1 selected"<<endl;

	default:cout<<grid_number;
	}
	PrintGameScreen();
	return 0;
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