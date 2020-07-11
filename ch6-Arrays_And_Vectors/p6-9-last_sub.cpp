#include <iostream>

using namespace std;

int main()
{
	void tic_tac_toe();
	tic_tac_toe();
}


void tic_tac_toe()
{
	int num_x, num_o, choices = 0;
	string board_num[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
	int winner;

	while (
		   !(board_num[0] == board_num[1] && board_num[1] == board_num[2])
		&& !(board_num[3] == board_num[4] && board_num[4] == board_num[5])
		&& !(board_num[6] == board_num[7] && board_num[7] == board_num[8])
		&& !(board_num[0] == board_num[3] && board_num[3] == board_num[6]) 
		&& !(board_num[1] == board_num[4] && board_num[4] == board_num[7])
		&& !(board_num[2] == board_num[5] && board_num[5] == board_num[8])
		&& !(board_num[0] == board_num[4] && board_num[4] == board_num[8])
		&& !(board_num[2] == board_num[4] && board_num[4] == board_num[6])
		)
	{
		// Print board
		for (int i = 0; i < 3; i++)
		{
			cout << board_num[i] << " ";
		}
		cout << endl;
		for (int i = 3; i < 6; i++)
		{
			cout << board_num[i] << " ";
		}
		cout << endl;
		for (int i = 6; i < 9; i++)
		{
			cout << board_num[i] << " ";
		}
		cout << endl;

		// Place x on board
		cout << "Enter number for x:\n";
		cin >> num_x;
		choices += 1;

		// break at final choice with no wins
		if (choices == 9) {
			winner = 2;
			break;
		}
		num_x -= 1;
		while (num_x < 0 || num_x > 8 || board_num[num_x] == "o" || board_num[num_x] == "x")
		{
			cout << "Choose a number on the board.\n";
			cin >> num_x;
			num_x -= 1;
		}

		board_num[num_x] = "x";
		
		// if x is winner then terminate loop
		if (board_num[0] == board_num[1] && board_num[1] == board_num[2] && board_num[0] == "x"
		|| board_num[3] == board_num[4] && board_num[4] == board_num[5] && board_num[3] == "x"
		|| board_num[6] == board_num[7] && board_num[7] == board_num[8] && board_num[6] == "x"
		|| board_num[0] == board_num[3] && board_num[3] == board_num[6] && board_num[0] == "x"
		|| board_num[1] == board_num[4] && board_num[4] == board_num[7] && board_num[1] == "x"
		|| board_num[2] == board_num[5] && board_num[5] == board_num[8] && board_num[2] == "x"
		|| board_num[0] == board_num[4] && board_num[4] == board_num[8] && board_num[0] == "x"
		|| board_num[2] == board_num[4] && board_num[4] == board_num[6] && board_num[2] == "x")
		{
			winner = 1;
			break;
		}

		// Print board
		for (int i = 0; i < 3; i++)
		{
			cout << board_num[i] << " ";
		}
		cout << endl;
		for (int i = 3; i < 6; i++)
		{
			cout << board_num[i] << " ";
		}
		cout << endl;
		for (int i = 6; i < 9; i++)
		{
			cout << board_num[i] << " ";
		}
		cout << endl;
		
		// Place o on board
		cout << "Enter number for o:\n";
		cin >> num_o;
		choices += 1;
		// break at final choice with no wins
		if (choices == 9) {
			winner = 2;
			break;
		}
		num_o -= 1;

		while (num_o < 0 || num_o > 8 || board_num[num_o] == "x" || board_num[num_o] == "o") 
		{
			cout << "Choose a number on the board.\n";
			cin >> num_o;
			num_o -= 1;
		}
		board_num[num_o] = "o";
		winner = 0;
	}

	if (winner == 1) {
		cout << "And the winner is x!!!" << endl;
	}
	else if (winner == 0){
		cout << "And the winner is o!!!" << endl;
	}
	else {
		cout << "It's a draw!!!" << endl;
	}
	

	// Print end game board
	for (int i = 0; i < 3; i++)
	{
		cout << board_num[i] << " ";
	}
	cout << endl;
	for (int i = 3; i < 6; i++)
	{
		cout << board_num[i] << " ";
	}
	cout << endl;
	for (int i = 6; i < 9; i++)
	{
		cout << board_num[i] << " ";
	}
	cout << endl;
	
}