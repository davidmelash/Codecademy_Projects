#include <iostream>
#include <string>
#include "Header.h"

using namespace std;
int main()
{
    int key = 0, value;
    char Player, press;
    char board[9] = { '0','1','2','3','4','5','6','7','8' };
    greeting();
    cout << "Press S + Enter to continue: ";
    cin >> press;
    while (key != 9) {

        display(board);
        cout << "Player 1(X)! Please enter your position (ex. 2): \n\n";
        cin >> value;
        Player = 'X';
        inser_boar(board, value, Player);
        display(board);
        if (check_winer(board)) {
            cout << "Player number 1 win!!!";
            break;
        }


        cout << "Player 2(O)! Please enter your position (ex. 2): \n\n";
        cin >> value;
        Player = 'O';
        inser_boar(board, value, Player);
        display(board);
        if (check_winer(board)) {
            cout << "Player number 2 win!!!";
            break;
        }
        key++;
    }


}
