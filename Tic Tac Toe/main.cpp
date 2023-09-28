#include <iostream>
#include <string>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void runGame();
void printBoard(string board[ROWS][COLS]);
int getPlay(string player, int r, int c, string board[ROWS][COLS]);
void getInput(string player, string board[ROWS][COLS]);
bool isBoardFull(string board[ROWS][COLS]);
string checkWin(string board[ROWS][COLS]);

int main()
{
    //Welcome Message
    cout << "Welcome to Tic Tac Toe! Let's Begin" << endl;
    cout << endl;

    //run game
    runGame();

    return 0;
}

/**
 * @brief Starts the game loop 
 * 
 * 
 */
void runGame()
{
    //board
    string board[ROWS][COLS] = {{" "," "," "},{" "," "," "},{" "," "," "}};

    //initialize board
    printBoard(board);
    cout << endl;

    //flag
    string winner = " ";

    while (1)
    {
        //X Turn
        getInput("X",board);
        printBoard(board);
        winner = checkWin(board);
        if(winner != " ")
        {
            cout << endl;
            cout << winner << " is the winner!" << endl;
            break;
        }
        else if(isBoardFull(board))
        {
            cout << endl;
            cout << "The board is full. It's a tie!" << endl;
            break;
        }

        //O Turn
        getInput("O", board);
        printBoard(board);
        winner = checkWin(board);
        if(winner != " ")
        {
            cout << endl;
            cout << winner << " is the winner!" << endl;
            break;
        }
        else if(isBoardFull(board))
        {
            cout << endl;
            cout << "The board is full. It's a tie!" << endl;
            break;
        }
    }
}

/**
 * @brief Prints the Game Board
 * 
 * 
 * @param board 
 */
void printBoard(string board[ROWS][COLS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            if(j < 2)
            {
                cout << board[i][j] << " | ";
            }
            else
            {
                cout << board[i][j];
            }
        }
        cout << endl;
        if(i < 2)
        {
            cout << ". .   . . " << endl;
        }
        
    }
}

int getPlay(string player, int r, int c, string board[ROWS][COLS])
{
    //check if spot is taken
    if(board[r][c] == " ")
    {
        board[r][c] = player;
        return 1;
    }
    else
    {
        cout << "That spot is taken. Try again." << endl;
        return 0;
    }
}


void getInput(string player, string board[ROWS][COLS])
{
    //X Turn
    int r,c = 0;
    cout << endl;
    cout << player <<"'s" << "Turn" << endl;
    cout << "Enter a row: ";
    cin >> r;
    cout << "Enter a column: ";
    cin >> c;
    //TODO:VALIDATE INPUT (can only be 0,1,2)
    if((r == 0 || r == 1 || r == 2) && (c == 0 || c == 1 || c == 2))
    {
        //do nothing
        int res = getPlay(player, r, c, board);
        if(res == 0)
        {
            getInput(player, board);
        }
        cout << endl;
    }
    else
    {
        cout << "Invalid input. Try again." << endl;
        getInput(player, board);
    }
    
    
}


/**
 * @brief Checks the status of the Board
 * 
 * @param board 
 * @return true 
 * @return false 
 */
bool isBoardFull(string board[ROWS][COLS])
{
    int cnt = 0;
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            if(board[i][j] == " ")
            {
                cnt++;
            }
        }
    }
    if(cnt > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

/**
 * @brief Checks if there is a winner
 * 
 * @param board 
 * @return string 
 */
string checkWin(string board[ROWS][COLS])
{
    //check rows
    for(int i = 0; i < ROWS; i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return board[i][0];
        }
    }

    //check columns
    for(int i = 0; i < COLS; i++)
    {
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return board[0][i];
        }
    }

    //check diagonals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return board[0][0];
    }
    else if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return board[0][2];
    }
    else
    {
        return " ";
    }
}
