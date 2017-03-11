#include "TicTacToe.h"

void TicTacToe::ImpossibleAI() {


	cout << "AI" << endl;

	/*if (grid[1][1] != "X") {
		aiInput = 5;
	}
	else {
		aiInput = 9;
	}*/

	if (aiInput != 0) {					//Checking if this is AI's first Move
		//switch statement to attack and insert "O" for AI to win
		switch (aiInput)
		{
		case 1: if (grid[0][0] == grid[0][1] && grid[0][2] == "3")
		{
			aiInput = 3;
		}
				else if (grid[0][0] == grid[0][2] && grid[0][1] == "2")
				{
					aiInput = 2;
				}
				else if (grid[0][0] == grid[1][0] && grid[2][0] == "7")
				{
					aiInput = 7;
				}
				else if (grid[0][0] == grid[2][0] && grid[1][0] == "4")
				{
					aiInput = 4;
				}
				else if (grid[0][0] == grid[1][1] && grid[2][2] == "9")
				{
					aiInput = 9;
				}
				else if (grid[0][0] == grid[2][2] && grid[1][1] == "5")
				{
					aiInput = 5;
				}
				else {
					break;
				}

		case 2:
			if (grid[0][1] == grid[0][0] && grid[0][2] == "3")
			{
				aiInput = 3;
			}
			else if (grid[0][1] == grid[0][2] && grid[0][0] == "1")
			{
				aiInput = 3;
			}
			else if (grid[0][1] == grid[1][1] && grid[2][1] == "8")
			{
				aiInput = 8;
			}
			else if (grid[0][1] == grid[2][1] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else {
				break;
			}

		case 3:
			if (grid[0][2] == grid[0][1] && grid[0][1] == "1")
			{
				aiInput = 1;
			}
			else if (grid[0][2] == grid[0][0] && grid[0][1] == "2")
			{
				aiInput = 2;
			}
			else if (grid[0][2] == grid[1][2] && grid[2][2] == "9")
			{
				aiInput = 9;
			}
			else if (grid[0][2] == grid[2][2] && grid[1][2] == "6")
			{
				aiInput = 6;
			}
			else if (grid[0][2] == grid[1][1] && grid[2][0] == "7")
			{
				aiInput = 7;
			}
			else if (grid[0][2] == grid[2][0] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else {
				break;
			}
		case 4:
			if (grid[1][0] == grid[0][0] && grid[2][0] == "7")
			{
				aiInput = 7;
			}
			else if (grid[1][0] == grid[2][2] && grid[0][0] == "1")
			{
				aiInput = 1;
			}
			else if (grid[1][0] == grid[1][1] && grid[1][2] == "6")
			{
				aiInput = 6;
			}
			else if (grid[1][0] == grid[1][2] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else {
				break;
			}

		case 5:
			if (grid[1][1] == grid[0][1] && grid[2][1] == "8")
			{
				aiInput = 8;
			}
			else if (grid[1][1] == grid[2][1] && grid[0][1] == "2")
			{
				aiInput = 2;
			}
			else if (grid[1][1] == grid[0][0] && grid[2][2] == "9")
			{
				aiInput = 9;
			}
			else if (grid[1][1] == grid[2][2] && grid[0][0] == "1")
			{
				aiInput = 1;
			}
			else if (grid[1][1] == grid[1][0] && grid[1][2] == "6")
			{
				aiInput = 6;
			}
			else if (grid[1][1] == grid[1][2] && grid[1][0] == "4")
			{
				aiInput = 4;
			}
			else if (grid[1][1] == grid[0][2] && grid[2][0] == "7")
			{
				aiInput = 7;
			}
			else if (grid[1][1] == grid[2][0] && grid[0][2] == "3")
			{
				aiInput = 3;
			}
			else {
				break;
			}

		case 6:
			if (grid[1][2] == grid[0][2] && grid[2][2] == "9")
			{
				aiInput = 9;
			}
			else if (grid[1][2] == grid[2][2] && grid[0][2] == "3")
			{
				aiInput = 3;
			}
			else if (grid[1][2] == grid[1][1] && grid[1][0] == "4")
			{
				aiInput = 4;
			}
			else if (grid[1][2] == grid[1][0] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else {
				break;
			}

		case 7:
			if (grid[2][0] == grid[1][1] && grid[0][2] == "3")
			{
				aiInput = 3;
			}
			else if (grid[2][0] == grid[0][2] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][0] == grid[1][0] && grid[0][0] == "1")
			{
				aiInput = 1;
			}
			else if (grid[2][0] == grid[0][0] && grid[1][0] == "3")
			{
				aiInput = 3;
			}
			else if (grid[2][0] == grid[2][1] && grid[2][2] == "9")
			{
				aiInput = 9;
			}
			else if (grid[2][0] == grid[2][2] && grid[2][1] == "8")
			{
				aiInput = 8;
			}
			else {
				break;
			}

		case 8:
			if (grid[2][1] == grid[0][1] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][1] == grid[1][1] && grid[0][1] == "2")
			{
				aiInput = 2;
			}
			else if (grid[2][1] == grid[2][2] && grid[2][0] == "7")
			{
				aiInput = 7;
			}
			else if (grid[2][1] == grid[2][0] && grid[2][2] == "9")
			{
				aiInput = 9;
			}
			else {
				break;
			}

		case 9:
			if (grid[2][2] == grid[1][1] && grid[0][0] == "1")
			{
				aiInput = 1;
			}
			else if (grid[2][2] == grid[0][0] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][2] == grid[1][2] && grid[0][2] == "3")
			{
				aiInput = 3;
			}
			else if (grid[2][2] == grid[0][2] && grid[1][2] == "6")
			{
				aiInput = 6;
			}
			else if (grid[2][2] == grid[2][1] && grid[2][0] == "7")
			{
				aiInput = 7;
			}
			else if (grid[2][2] == grid[2][0] && grid[2][1] == "8")
			{
				aiInput = 8;
			}
			else {
				break;
			}
		default:
			break;
		}
	}

	if (lastAIInput == aiInput) {
		//To defend and block player from winning
		switch (playerInput)
		{
		case 1: if (grid[0][0] == grid[0][1] && grid[0][2] == "3")
		{
			aiInput = 3;
		}
				else if (grid[0][0] == grid[0][2] && grid[0][1] == "2")
				{
					aiInput = 2;
				}
				else if (grid[0][0] == grid[1][0] && grid[2][0] == "7")
				{
					aiInput = 7;
				}
				else if (grid[0][0] == grid[2][0] && grid[1][0] == "4")
				{
					aiInput = 4;
				}
				else if (grid[0][0] == grid[1][2] && grid[2][2] == "9")
				{
					aiInput = 9;
				}
				else if (grid[0][0] == grid[2][2] && grid[1][1] == "5")
				{
					aiInput = 5;
				}
				else if (grid[1][1] == "5")
				{
					aiInput = 5;
				}
				else if (grid[2][2] == "9")
				{
					aiInput = 9;
				}
				break;

		case 2: if (grid[0][1] == grid[0][0] && grid[0][2] == "3")
		{
			aiInput = 3;
		}
				else if (grid[0][1] == grid[0][2] && grid[0][0] == "1")
				{
					aiInput = 1;
				}
				else if (grid[0][1] == grid[1][1] && grid[2][1] == "8")
				{
					aiInput = 8;
				}
				else if (grid[0][1] == grid[2][1] && grid[1][1] == "5")
				{
					aiInput = 5;
				}
				else if (grid[1][1] == "5")
				{
					aiInput = 5;
				}
				else if (grid[2][2] == "9")
				{
					aiInput = 9;
				}
				break;

		case 3: if (grid[0][2] == grid[0][1] && grid[0][0] == "1")
		{
			aiInput = 1;
		}
				else if (grid[0][2] == grid[0][0] && grid[0][1] == "2")
				{
					aiInput = 2;
				}
				else if (grid[0][2] == grid[1][2] && grid[2][2] == "9")
				{
					aiInput = 9;
				}
				else if (grid[0][2] == grid[2][2] && grid[1][1] == "6")
				{
					aiInput = 6;
				}
				else if (grid[0][2] == grid[1][1] && grid[2][0] == "7")
				{
					aiInput = 7;
				}
				else if (grid[0][2] == grid[2][0] && grid[1][1] == "5")
				{
					aiInput = 5;
				}
				else if (grid[1][1] == "5")
				{
					aiInput = 5;
				}
				else if (grid[2][2] == "9")
				{
					aiInput = 9;
				}
				break;
		case 4:
			if (grid[1][0] == grid[0][0] && grid[2][0] == "7")
			{
				aiInput = 7;
			}
			else if (grid[1][0] == grid[2][0] && grid[0][0] == "1")
			{
				aiInput = 1;
			}
			else if (grid[1][0] == grid[1][1] && grid[1][2] == "6")
			{
				aiInput = 6;
			}
			else if (grid[1][0] == grid[1][2] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][2] == "9")
			{
				aiInput = 9;
			}
			break;

		case 5:
			if (grid[1][1] == grid[0][1] && grid[2][1] == "8")
			{
				aiInput = 8;
			}
			else if (grid[1][1] == grid[2][1] && grid[0][1] == "2")
			{
				aiInput = 2;
			}
			else if (grid[1][1] == grid[1][0] && grid[1][2] == "6")
			{
				aiInput = 6;
			}
			else if (grid[1][1] == grid[1][2] && grid[1][0] == "4")
			{
				aiInput = 4;
			}
			else if (grid[1][1] == grid[0][0] && grid[2][2] == "9")
			{
				aiInput = 9;
			}
			else if (grid[1][1] == grid[2][2] && grid[0][0] == "1")
			{
				aiInput = 1;
			}
			else if (grid[1][1] == grid[0][2] && grid[2][0] == "7")
			{
				aiInput = 7;
			}
			else if (grid[1][1] == grid[2][0] && grid[0][2] == "3")
			{
				aiInput = 3;
			}
			else if (grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][2] == "9")
			{
				aiInput = 9;
			}

			break;

		case 6:
			if (grid[1][2] == grid[0][2] && grid[2][2] == "9")
			{
				aiInput = 9;
			}
			else if (grid[1][2] == grid[2][2] && grid[0][2] == "3")
			{
				aiInput = 3;
			}
			else if (grid[1][2] == grid[1][1] && grid[1][0] == "4")
			{
				aiInput = 4;
			}
			else if (grid[1][2] == grid[1][0] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][2] == "9")
			{
				aiInput = 9;
			}
			break;

		case 7:

			if (grid[2][0] == grid[2][1] && grid[2][2] == "9")
			{
				aiInput = 9;
			}
			else if (grid[2][0] == grid[2][2] && grid[2][1] == "8")
			{
				aiInput = 8;
			}
			else if (grid[2][0] == grid[1][1] && grid[0][2] == "3")
			{
				aiInput = 3;
			}
			else if (grid[2][0] == grid[0][2] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][0] == grid[1][0] && grid[0][0] == "1")
			{
				aiInput = 1;
			}
			else if (grid[2][0] == grid[0][0] && grid[1][0] == "4")
			{
				aiInput = 4;
			}
			else if (grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][2] == "9")
			{
				aiInput = 9;
			}
			break;

		case 8:
			if (grid[2][1] == grid[1][1] && grid[0][1] == "2")
			{
				aiInput = 2;
			}
			else if (grid[2][1] == grid[0][1] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][1] == grid[2][0] && grid[2][2] == "9")
			{
				aiInput = 9;
			}
			else if (grid[2][1] == grid[2][2] && grid[2][0] == "7")
			{
				aiInput = 7;
			}
			else if (grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][2] == "9")
			{
				aiInput = 9;
			}
			break;

		case 9:
			if (grid[2][2] == grid[1][1] && grid[0][0] == "1")
			{
				aiInput = 1;
			}
			else if (grid[2][2] == grid[0][0] && grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][2] == grid[2][1] && grid[2][0] == "7")
			{
				aiInput = 7;
			}
			else if (grid[2][2] == grid[2][0] && grid[2][1] == "8")
			{
				aiInput = 8;
			}
			else if (grid[2][2] == grid[1][2] && grid[0][2] == "3")
			{
				aiInput = 3;
			}
			else if (grid[2][2] == grid[0][2] && grid[1][2] == "6")
			{
				aiInput = 6;
			}
			else if (grid[1][1] == "5")
			{
				aiInput = 5;
			}
			else if (grid[2][2] == "9")
			{
				aiInput = 9;
			}
			break;
		default:
			break;
		}
	}

	if (lastAIInput == aiInput) {

		if (InputCounter == 3)
		{
			if (grid[1][0] == "4")
			{
				aiInput = 4;
			}
			else if (grid[1][2] == "6")
			{
				aiInput = 6;
			}
		}
		if (InputCounter == 7 || InputCounter == 5)
		{
			if (grid[2][1] == "7")
			{
				aiInput = 7;
			}
			else if (grid[0][2] == "3")
			{
				aiInput = 3;
			}
			else if (grid[0][0] == "1")
			{
				aiInput == 1;
			}
		}
	}

	lastAIInput = aiInput;
	AssignValues(aiInput);
	
}