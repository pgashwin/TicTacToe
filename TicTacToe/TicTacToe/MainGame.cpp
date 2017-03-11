#include "TicTacToe.h"


//First set of Items displayed when the game starts
void TicTacToe::WelcomeScreen()
{
	lastAIInput = 0; // initialize
	cout << "TIC TAC TOE" << endl;
	cout << "Player 1 - X \nPlayer 2 - O" << endl;

	int a = 0;	// Use this to add values initially and increment in array.	
	//adding values to the array initially from 1 to 9
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			a++;
			grid[i][j] = to_string(a);  // converting int to string.
		}
	}
	int selection;
	cout << "1. Play with AI\n2.Player Vs Player" << endl;
	cin >> selection;
	switch (selection)
	{
		case 1: isAION = true;
				PrintGameScreen();				
				break;
		case 2: PrintGameScreen();
				break;
	}	
	//PrintGameScreen();
}



int TicTacToe::PrintGameScreen()
{
	//TODO:clear the screen and keep it lively
	//if (GameOver == false) {
		system("cls");
	

	if (InputCounter != 9)
	{
		cout << "\n\n" << endl;
		//to display all the contents in the array
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				cout << " " << grid[i][j] << ' ';
			}
			cout << endl;
		}
		if (GameOver == false) {
			RecieveInput();
		}
		else {
			cout << "\n\n" << decision << endl;
		}
	}
	else
	{
		cout <<"\n\n"<< "Match Draw" << endl;
	}
	return 0;
}


//Take input from the user
void TicTacToe::RecieveInput() {
	

	
	
	//AI is ON
	if (isAION == true)
	{
		if (IsPlayer1 == true)
		{
			cin >> playerInput;
			grid_value = "X";
		}
		else
		{
			grid_value = "O";
			ImpossibleAI();
		}
	}
	//end
	
		
	else if(isAION==false)
	{
		cin >> playerInput;
		if (IsPlayer1 == true) {
			grid_value = "X";
		}
		else
		{
			grid_value = "O";
		}
	}
	if (IsPlayer1 == true|| isAION ==false)		//if it's not ai or if it's player 1 entering the input, only then we want to assign values by ourselves.
	AssignValues(playerInput);
}


int TicTacToe::AssignValues(int grid_number) {
	switch (grid_number) {
	case 1: grid[0][0] != "X" && "O" ? grid[0][0] = grid_value : RecieveInput();
		break;
	case 2: grid[0][1] != "X" && "O" ? grid[0][1] = grid_value : RecieveInput();
		break;
	case 3: grid[0][2] != "X" && "O" ? grid[0][2] = grid_value : RecieveInput();
		break;
	case 4: grid[1][0] != "X" && "O" ? grid[1][0] = grid_value : RecieveInput();
		break;
	case 5: grid[1][1] != "X" && "O" ? grid[1][1] = grid_value : RecieveInput();
		break;
	case 6: grid[1][2] != "X" && "O" ? grid[1][2] = grid_value : RecieveInput();
		break;
	case 7: grid[2][0] != "X" && "O" ? grid[2][0] = grid_value : RecieveInput();
		break;
	case 8: grid[2][1] != "X" && "O" ? grid[2][1] = grid_value : RecieveInput();
		break;
	case 9: grid[2][2] != "X" && "O" ? grid[2][2] = grid_value : RecieveInput();
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
			else if (grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2])
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
		decision = "Player 1 Wins";
		PrintGameScreen();
	}
	else if(IsPlayer1 == true && isAION == false)
	{
		decision = "Player 2 Wins";
		PrintGameScreen();
	}
	else
	{
		decision = "AI wins";
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

//TODO: check if there is no attack or defense condition during the end of the game (when only grid 2 and 3 is remaining)