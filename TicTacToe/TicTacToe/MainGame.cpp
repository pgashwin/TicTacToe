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



int TicTacToe::PrintGameScreen()
{
	if (InputCounter != 9)
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
		if (GameOver == false)
			RecieveInput();
	}
	else
	{
		cout << "Match Draw" << endl;
	}
	return 0;
}


//Take input from the user
void TicTacToe::RecieveInput() {
	int input;

	cin >> input;
	if (IsPlayer1==true){
		grid_value = "X";
	}
	else
	{
		grid_value = "O";
	}
	AssignValues(input);
}


int TicTacToe::AssignValues(int grid_number) {
	switch (grid_number) {
	case 1:  grid[0][0] = grid_value; 
		break;
	case 2: grid[0][1] = grid_value;
		break;
	case 3: grid[0][2] = grid_value;
		break;
	case 4: grid[1][0] = grid_value;
		break;
	case 5: grid[1][1] = grid_value;
		break;
	case 6: grid[1][2] = grid_value;
		break;
	case 7: grid[2][0] = grid_value;
		break;
	case 8: grid[2][1] = grid_value;
		break;
	case 9: grid[2][2] = grid_value;
		break;

	default: cout << "Enter a Valid input" << endl;
		break;
	}

	

	//switch the player after every input
	if (IsPlayer1 == false) {
		IsPlayer1 = true;
	}
	else
	{
		IsPlayer1 = false;
	}

	InputCounter++; //increment counter after every input;

	GameLogic();
	
	return 0;
}

int TicTacToe::GameLogic() //checking the grid values
{
		if (InputCounter < 3) {
			PrintGameScreen();
			return 0;
		}
		else
		{
			if (grid[0][0] == grid[0][1] && grid[0][0] == grid[0][2])
			{
				PrintWinner();
			}
			else if (grid[0][0] == grid[1][0] && grid[0][0] == grid[2][0])
			{
				PrintWinner();
			}
			else if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2])
			{
				PrintWinner();
			}
			else if (grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1])
			{
				PrintWinner();
			}
			else if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0])
			{
				PrintWinner();
			}
			else if (grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2])
			{
				PrintWinner();
			}
			else
			{
				PrintGameScreen();
			}

		}
	return 0;
}

void TicTacToe::PrintWinner() {

	GameOver = true;
	if (IsPlayer1 == false) {
		cout << "Player 1 Wins" << endl;
		PrintGameScreen();
	}
	else
	{
		cout << "Player 2 Wins" << endl;
		PrintGameScreen();
	}
	
}


int main()
{
	TicTacToe myGame;
	myGame.WelcomeScreen();
	system("pause");
	return 0;
}