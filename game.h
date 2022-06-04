void DisplayLine(char TableGame[][10], char TableAll[]);
/*
To display the grid.
          +TableGame : Table to save the pieces in the grid (TableGame[i] maybe equal to @ or space);
          +TableAll  : Table have the letter for all columns of the grid.
*/
int SearchColumn(char Letter,char TableAll[10],int piece);
/*
To find the column when the player choose a letter.
              +TableAll  : Table have the letter for all columns of the grid.
              +Letter    : Letter of the column where the player like put the piece.0
              +piece     : integer between 0 and 6 have the piece's number.
*/
int SearchLine(int index,char TableGame[10][10],int piece,int orientation);
/*
To find the line where put the piece.
              +TableGame : Table to save the pieces in the grid (TableGame[i] maybe equal to @ or space).
              +piece     : integer between 0 and 6 have the piece's number.
              +orientation  : integer between 1 and 4 have the piece's shape.
              +index     : an integer have the number of column.   
*/
int PartPosition(int Column,char TableGame[10][10],char TableAll[10],int orientation,int piece);
/*
place the pieces in their places.
          +TableGame : Table to save the pieces in the grid (TableGame[i] maybe equal to @ or space);
          +TableAll  : Table have the letter for all columns of the grid.
          +piece     : integer between 0 and 6 have the piece's number.
          +orientation  : integer between 1 and 4 have the piece's shape.
          +Column  : Letter of column.

*/

int CalculScore(char TableGame[10][10],int TabPlein[10]);
/*
To verify if the line is full or not and add 10 to score if yes.
          +TabPlein : Table of integers maybe have 0 or 1 : 1 if line is full, 0 if not.
          +TableGame : Table to save the pieces in the grid (TableGame[i] maybe equal to @ or space).
*/
void SaveScore(char Name[],int Score);
/*
Open a file to save the score and the player's name.
                +Name : String of the player's name.
                +Score : An integer for the score.
*/
void DisplayBest (char FileName[]);
/*
Open the file to read all the scores and display the best one with player's name.
               +FileName : String for the name of file. example(Tetris.txt).
*/
int convertirTemps();
void SauvgarderDate();
void GetDate(char Date[]);