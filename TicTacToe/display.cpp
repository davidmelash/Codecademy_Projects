#include <iostream>
#include <string>


void display(char board[9]) {


	std::cout << "     |     |      \n";

	std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";

	std::cout << "_____|_____|_____ \n";
	std::cout << "     |     |      \n";

	std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";

	std::cout << "_____|_____|_____ \n";
	std::cout << "     |     |      \n";

	std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
	std::cout << "     |     |      \n\n";

}


void inser_boar(char board[9], int value, char Player) {
	board[value] = Player;
}


bool check_winer(char board[9]) {

	if ((board[0] == 'X' && board[1] == 'X' && board[2] == 'X') || (board[0] == 'O' && board[1] == 'O' && board[2] == 'O')) {
		return true;
	}
	else if ((board[3] == 'X' && board[4] == 'X' && board[5] == 'X') || (board[3] == 'O' && board[4] == 'O' && board[5] == 'O')) {
		return true;
	}
	else if ((board[6] == 'X' && board[7] == 'X' && board[8] == 'X') || (board[6] == 'O' && board[7] == 'O' && board[8] == 'O')) {
		return true;
	}
	else if ((board[0] == 'X' && board[3] == 'X' && board[6] == 'X') || (board[0] == 'O' && board[3] == 'O' && board[6] == 'O')) {
		return true;
	}
	else if ((board[1] == 'X' && board[4] == 'X' && board[7] == 'X') || (board[1] == 'O' && board[4] == 'O' && board[7] == 'O')) {
		return true;
	}
	else if ((board[2] == 'X' && board[5] == 'X' && board[8] == 'X') || (board[2] == 'O' && board[5] == 'O' && board[8] == 'O')) {
		return true;
	}
	else if ((board[0] == 'X' && board[4] == 'X' && board[8] == 'X') || (board[0] == 'O' && board[4] == 'O' && board[8] == 'O')) {
		return true;
	}
	else if ((board[2] == 'X' && board[4] == 'X' && board[6] == 'X') || (board[2] == 'O' && board[4] == 'O' && board[6] == 'O')) {
		return true;
	}
	else {
		return false;
	}

}

void greeting() {
	std::cout << "....WELCOME!..WELCOME!..WELCOME!..WELCOME!....\n";
	std::cout << "                 .                            \n";
	std::cout << "                 |                            \n";
	std::cout << "              .-\"^\"-.                       \n";
	std::cout << "             /_....._\\                       \n";
	std::cout << "         .-\"`         `\"-.                  \n";
	std::cout << "        (  ooo  ooo  ooo  )                   \n";
	std::cout << "         '-.,_________,.-'    ,-----------.   \n";
	std::cout << "              /     \\        ( TIC-TAC-TOE ) \n";
	std::cout << "             /   0   \\      / `-----------'  \n";
	std::cout << "            /  --|--  \\    /                 \n";
	std::cout << "           /     |     \\                     \n";
	std::cout << "          /     / \\     \\                   \n";
	std::cout << "         /               \\                   \n";

}