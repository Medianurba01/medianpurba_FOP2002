#include <cstdlib>
#include <iostream>
using namespace std;

const int SIZE=3;
// declare all the functions here
void InitializeBoard(char Game_Board [][SIZE]);
void Display(char Game_Board[][SIZE]);
bool Board_full(char Game_Board[][SIZE]);
bool Assign(char Game_Board[][SIZE], int x, int y, char z);
char CheckWon(char gameBoard[][SIZE]);

int main()
{
   char turn;
   int x, y;
   char game_Board[SIZE ][SIZE];

   // Call the function InitializeBoard to Initialize the game board pieces to blanks
   InitializeBoard(game_Board);

   // Randomly determine who is to start the game
   int t=rand()%2;
   if (t == 1)
        turn='X';
   else
        turn='O';
   cout << "OK! the game start now!!!" << endl;

   // Display the initial game board on screen
   Display(game_Board);

   // The game is played between two players until one of two cases occurs:
   // (1) the board is completely filled with pieces from the player, and no winner is determined. 
   // (2) one player wins the game
   while (!Board_full(game_Board) && (CheckWon(game_Board) == 'n'))
   {
    // Prompt the player to enter the position to play the next move

 // The move is validated in the inner loop. 

 // Only if a move is valid, it will be assigned to the gameboard
       do
       {
          do {
          cout << "Participant " << turn << "create the next move."<<endl;
          cout << "Enter the x , y location, 0<=x<3, 0<=y<3:";
          cin >> x >> y;
          } while (x>2 || x<0 || y>2 || y<0);
       }
       while (!Assign(game_Board, x, y, turn));
       // The Assign function will attempt to assign a move from a player to the gameboard. IF there is already a piece at that location, 
       // Assign function will not put the piece at that location and it returns false. Otherwise, it will put the piece at that location and return true. 

 // Show the updated game board
       Display(game_Board);

 // determines the player for the next move
       if (turn == 'X')
           turn = 'O';
       else
           turn = 'X';
   }

   // Display the result of the game
   if (CheckWon(game_Board) == 'X')
      cout << "WOW!The wins is Player X !!" << endl;
      return 0;
   if (CheckWon(game_Board) == 'O')
      cout << "Good job! The wins is Player O !!" << endl;
      return 0;
   if (CheckWon(game_Board) != 'X' || CheckWon(game_Board) != 'O')
      cout << "Draw Game!" << endl;
      return 0;
}

// This function initializes all the elements of the game board to blank characters ' '
void InitializeBoard(char game_Board [][3])
{
  //char gameBd[3][3]= {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}};
  for (int i = 0; i< 3; i++){
    for (int j = 0; j< 3; j++){
      game_Board [i][j] = ' ';
    }
  }
}

// This function displays the game board as a 3 by 3 board
void Display(char game_Board[][3])
{
  //char gameBoard[3][3]= {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}};
  cout<<" "<<game_Board[0][0]<<" | "<<game_Board[0][1]<<"  | "<<game_Board[0][2]<<" "<<'\n';
  cout<<"------------"<<'\n';
  cout<<" "<<game_Board[1][0]<<" | "<<game_Board[1][1]<<"  | "<<game_Board[1][2]<<" "<<'\n';
  cout<<"------------"<<'\n';
  cout<<" "<<game_Board[2][0]<<" | "<<game_Board[2][1]<<"  | "<<game_Board[2][2]<<" "<<'\n';
}

// This function checks to see if all the elements of the game board have been filled
bool Board_full(char game_Board[][SIZE])
{
   

    int flag = 0;
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        if(game_Board[i][j] != ' '){
          flag = 1;
        }
        else if(game_Board[i][j] == ' '){
          flag = 0;
        } 
      }
    }

    if (flag == 1){
      return true;
    }
    else return false;
}

// This function assigns character p to location (x, y) on the game board
// p is either 'X' or 'O'
// If the location (x, y) already has a piece/character there, do not assign p to that location, returns the boolean value false
// If the location (x, y) does not have any piece/character, assign p to that location and return true
bool Assign(char game_Board[][SIZE], int x, int y, char p)
{
 if (game_Board[x][y] != ' '){ 
    return false;
    } 
else{
    game_Board[x][y] = p;
    return true;
    } 
 }



// check to see if the game is over by checking
// if any row, column or diagonal has the same character
// if 'X' is on all elements of a row, column, or diagonal, 'X' is returned
// if 'O' is ............................................., 'O' is returned
// otherwise, 'n' is returned.
char CheckWon(char game_Board[][3]){
    char won = 'n';
    int flag = 0;

    // write multiway if statement to check whether a win condition is met
    // Case 1: the 3 elements on the i-th row of the array are the same, assign the array element value to variable "won" 
    // Case 2: the 3 elements on the j-th column of the array are the same, assign value to variable "won" 
    // Case 3: the 3 elements on the diagonal of the array are the same, assign value to variable "won"
    // Case 4: the 3 elements of the second diagonal of the array are the same, assign value to variable "won"

    if ((game_Board[0][0] == 'X' && game_Board[0][1] == 'X' && game_Board[0][2] == 'X') || (game_Board[0][0] == 'O' && game_Board[0][1] == 'O' && game_Board[0][2] == 'O')){
      flag = 1;
      won = game_Board[0][0];
    }

    else if ((game_Board[1][0] == 'X' && game_Board[1][1] == 'X' && game_Board[1][2] == 'X') || (game_Board[1][0] == 'O' && game_Board[1][1] == 'O' && game_Board[1][2] == 'O')){
      flag = 1;
      won = game_Board[1][0];
    }

    else if ((game_Board[2][0] == 'X' && game_Board[2][1] == 'X' && game_Board[2][2] == 'X') || (game_Board[2][0] == 'O' && game_Board[2][1] == 'O' && game_Board[2][2] == 'O')){
      flag = 1;
      won = game_Board[2][0];
    }

    else if ((game_Board[0][0] == 'X' && game_Board[1][0] == 'X' && game_Board[2][0] == 'X') || (game_Board[0][0] == 'O' && game_Board[1][0] == 'O' && game_Board[2][0] == 'O')){
      flag = 1;
      won = game_Board[0][0];
    }

    else if ((game_Board[0][1] == 'X' && game_Board[1][1] == 'X' && game_Board[2][1] == 'X') || (game_Board[0][1] == 'O' && game_Board[1][1] == 'O' && game_Board[2][1] == 'O')){
      flag = 1;
      won = game_Board[0][1];
    }

    else if ((game_Board[0][2] == 'X' && game_Board[1][2] == 'X' && game_Board[2][2] == 'X') || (game_Board[0][2] == 'O' && game_Board[1][2] == 'O' && game_Board[2][2] == 'O')){
      flag = 1;
      won = game_Board[0][2];
    }

    else if ((game_Board[0][0] == 'X' && game_Board[1][1] == 'X' && game_Board[2][2] == 'X') || (game_Board[0][0] == 'O' && game_Board[1][1] == 'O' && game_Board[2][2] == 'O')){
      flag = 1;
      won = game_Board[0][0];
    }

    else if ((game_Board[0][2] == 'X' && game_Board[1][1] == 'X' && game_Board[2][0] == 'X') || (game_Board[0][2] == 'O' && game_Board[1][1] == 'O' && game_Board[2][0] == 'O')){
      flag = 1;
      won = game_Board[0][2];
    }

  return won;
}