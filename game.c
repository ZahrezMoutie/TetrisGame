#include "headers.h"

void DisplayLine(char TableGame[][10], char TableAll[])
{
    /*
    To display the grid.
              +TableGame : Table to save the pieces in the grid (TableGame[i] maybe equal to @ or space);
              +TableAll  : Table have the letter for all columns of the grid.
    */

    couleur_char(VERT);
    printf("Voici votre grille: \n");
    couleur_char(BLANC);
    printf(" %c %c %c %c %c %c %c %c %c %c \n", TableAll[0], TableAll[1], TableAll[2], TableAll[3], TableAll[4], TableAll[5], TableAll[6], TableAll[7], TableAll[8], TableAll[9]);
    couleur_char(CYAN);
    for (int i = 0; i < 10; i++)
        printf("|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n", TableGame[0][i], TableGame[1][i], TableGame[2][i], TableGame[3][i], TableGame[4][i], TableGame[5][i], TableGame[6][i], TableGame[7][i], TableGame[8][i], TableGame[9][i]);
    couleur_char(BLANC);
}
int SearchColumn(char Letter, char TableAll[10], int piece)
{
    /*
    To find the column when the player choose a letter.
                  +TableAll  : Table have the letter for all columns of the grid.
                  +Letter    : Letter of the column where the player like put the piece.0
                  +piece     : integer between 0 and 6 have the piece's number.
    */

    int i;
    if (piece == 0)
    {
        for (i = 0; i < 10; i++)
        {
            if (TableAll[i] == Letter)
            {
                return i;
            }
        }
    }
    if (piece == 1)
    {
        for (i = 0; i < 10; i++)
        {
            if (TableAll[i] == Letter)
            {
                return i;
            }
        }
    }
    if (piece == 2)
    {
        for (i = 0; i < 10; i++)
        {
            if (TableAll[i] == Letter)
            {
                return i;
            }
        }
    }
    if (piece == 3)
    {
        for (i = 0; i < 10; i++)
        {
            if (TableAll[i] == Letter)
            {
                return i;
            }
        }
    }
    if (piece == 4)
    {
        for (i = 0; i < 10; i++)
        {
            if (TableAll[i] == Letter)
            {
                return i;
            }
        }
    }
    if (piece == 5)
    {
        for (i = 0; i < 10; i++)
        {
            if (TableAll[i] == Letter)
            {
                return i;
            }
        }
    }
    if (piece == 6)
    {
        for (i = 0; i < 10; i++)
        {
            if (TableAll[i] == Letter)
            {
                return i;
            }
        }
    }
}
int SearchLine(int index, char TableGame[10][10], int piece, int orientation)
{

    /*
    To find the line where put the piece.
                  +TableGame : Table to save the pieces in the grid (TableGame[i] maybe equal to @ or space).
                  +piece     : integer between 0 and 6 have the piece's number.
                  +orientation  : integer between 1 and 4 have the piece's shape.
                  +index     : an integer have the number of column.
    */

    int i, j, test = 8, test1 = 7, test2 = 6, test3 = 9;
    if (piece == 0)
    {
        if (orientation == 1)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 2] == '@' || TableGame[index + 1][i + 3] == '@')
                {
                    return i;
                }
            }
            return test1;
        }
        if (orientation == 2)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 3] == '@' || TableGame[index + 1][i + 2] == '@')
                {
                    return i;
                }
            }
            return test1;
        }
        if (orientation == 3)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 1] == '@' || TableGame[index + 2][i + 1] == '@' || TableGame[index + 1][i + 2] == '@')
                {
                    return i;
                }
            }
            return test;
        }
        if (orientation == 4)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 2] == '@' || TableGame[index + 2][i + 2] == '@' || TableGame[index + 1][i + 2] == '@')
                {
                    return i;
                }
            }
            return test;
        }
    }
    if (piece == 1)
    {
        if (orientation == 1)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 1] == '@' || TableGame[index + 2][i + 2] == '@' || TableGame[index + 1][i + 2] == '@')
                {
                    return i;
                }
            }
            return test;
        }
        if (orientation == 2)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 2] == '@' || TableGame[index + 2][i + 1] == '@' || TableGame[index + 1][i + 2] == '@')
                {
                    return i;
                }
            }
            return test;
        }
        if (orientation == 3)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 2] == '@' || TableGame[index + 1][i + 3] == '@')
                {
                    return i;
                }
            }
            return test1;
        }
        if (orientation == 4)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 3] == '@' || TableGame[index + 1][i + 2] == '@')
                {
                    return i;
                }
            }
            return test1;
        }
    }
    if (piece == 2)
    {

        if (orientation == 1)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 2] == '@' || TableGame[index + 2][i + 1] == '@' || TableGame[index + 1][i + 2] == '@')
                {
                    return i;
                }
            }
            return test;
        }
        if (orientation == 2)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 1] == '@' || TableGame[index + 2][i + 2] == '@' || TableGame[index + 1][i + 2] == '@')
                {
                    return i;
                }
            }
            return test;
        }
        if (orientation == 3)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 2] == '@' || TableGame[index + 1][i + 3] == '@')
                {
                    return i;
                }
            }
            return test1;
        }
        if (orientation == 4)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 3] == '@' || TableGame[index + 1][i + 2] == '@')
                {
                    return i;
                }
            }
            return test1;
        }
    }
    if (piece == 3)
    {
        if (orientation == 1)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 3] == '@' || TableGame[index + 1][i + 3] == '@')
                {
                    return i;
                }
            }
            return test1;
        }
        if (orientation == 2)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 3] == '@' || TableGame[index + 1][i + 1] == '@')
                {
                    return i;
                }
            }
            return test1;
        }
        if (orientation == 3)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 2] == '@' || TableGame[index + 1][i + 2] == '@' || TableGame[index + 2][i + 2] == '@')
                {
                    return i;
                }
            }
            return test;
        }
        if (orientation == 4)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 1] == '@' || TableGame[index + 1][i + 1] == '@' || TableGame[index + 2][i + 2] == '@')
                {
                    return i;
                }
            }
            return test;
        }
    }
    if (piece == 4)
    {
        if (orientation == 1)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 3] == '@' || TableGame[index + 1][i + 3] == '@')
                {
                    return i;
                }
            }
            return test1;
        }
        if (orientation == 2)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 1] == '@' || TableGame[index + 1][i + 3] == '@')
                {
                    return i;
                }
            }
            return test1;
        }
        if (orientation == 3)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 2] == '@' || TableGame[index + 1][i + 2] == '@' || TableGame[index + 2][i + 2] == '@')
                {
                    return i;
                }
            }
            return test;
        }
        if (orientation == 4)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 2] == '@' || TableGame[index + 1][i + 1] == '@' || TableGame[index + 2][i + 1] == '@')
                {
                    return i;
                }
            }
            return test;
        }
    }
    if (piece == 5)
    {
        if (orientation == 1 || orientation == 2)
        {
            for (i = 0; i < 8; i++)
            {
                if (TableGame[index][i + 4] == '@')
                {
                    return i;
                }
            }
            return test2;
        }
        if (orientation == 3 || orientation == 4)
        {
            for (i = 0; i < 9; i++)
            {
                if (TableGame[index][i + 1] == '@' || TableGame[index + 1][i + 1] == '@' || TableGame[index + 2][i + 1] == '@' || TableGame[index + 3][i + 1] == '@')
                {
                    return i;
                }
            }
            return test3;
        }
    }
    if (piece == 6)
    {
        for (i = 0; i < 8; i++)
        {
            if (TableGame[index][i + 2] == '@' || TableGame[index + 1][i + 2] == '@')
            {
                return i;
            }
        }
        return test;
    }
}
int PartPosition(int Colonne, char tab[10][10], char tabAL[10], int orientation, int piece)
{

    /*
place the pieces in their places.
          +TableGame : Table to save the pieces in the grid (TableGame[i] maybe equal to @ or space);
          +TableAll  : Table have the letter for all columns of the grid.
          +piece     : integer between 0 and 6 have the piece's number.
          +orientation  : integer between 1 and 4 have the piece's shape.
          +Column  : Letter of column.

*/
    int test = 0;
    if (piece == 0)
    {
        int index = SearchColumn(Colonne, tabAL, 0);
        int index1 = SearchLine(index, tab, 0, orientation);
        if (index1 == 0)
        {
            test = 1;
        }
        if (orientation == 1)
        {
            if (Colonne == 'J')
            {
                return 0;
            }

            tab[index][index1 + 1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 1][index1 + 2] = '@';
        }
        if (orientation == 2)
        {
            if (Colonne == 'J')
            {
                return 0;
            }

            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index][index1 + 2] = '@';
            tab[index + 1][index1 + 1] = '@';
        }
        if (orientation == 3)
        {
            if (Colonne == 'J' || Colonne == 'I')
            {
                return 0;
            }

            tab[index][index1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 2][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
        }
        if (orientation == 4)
        {
            if (Colonne == 'J' || Colonne == 'I')
            {
                return 0;
            }

            tab[index + 1][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1 + 1] = '@';
        }
    }
    if (piece == 1)
    {
        int index = SearchColumn(Colonne, tabAL, 1);
        int index1 = SearchLine(index, tab, 1, orientation);
        if (index1 == 0)
        {
            test = 1;
        }
        if (orientation == 1)
        {
            if (Colonne == 'J' || Colonne == 'I')
            {
                return 0;
            }
            tab[index][index1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1 + 1] = '@';
        }
        if (orientation == 2)
        {
            if (Colonne == 'J' || Colonne == 'I')
            {
                return 0;
            }
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1] = '@';
        }
        if (orientation == 3)
        {
            if (Colonne == 'J')
            {
                return 0;
            }
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 1][index1 + 2] = '@';
        }
        if (orientation == 4)
        {
            if (Colonne == 'J')
            {
                return 0;
            }
            tab[index][index1 + 1] = '@';
            tab[index][index1 + 2] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
        }
    }
    if (piece == 2)
    {
        int index = SearchColumn(Colonne, tabAL, 2);
        int index1 = SearchLine(index, tab, 2, orientation);
        if (index1 == 0)
        {
            test = 1;
        }
        if (orientation == 1)
        {
            if (Colonne == 'J' || Colonne == 'I')
            {
                return 0;
            }
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1] = '@';
        }
        if (orientation == 2)
        {
            if (Colonne == 'J' || Colonne == 'I')
            {
                return 0;
            }
            tab[index][index1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1 + 1] = '@';
        }
        if (orientation == 3)
        {
            if (Colonne == 'J')
            {
                return 0;
            }
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 1][index1 + 2] = '@';
        }
        if (orientation == 4)
        {
            if (Colonne == 'J')
            {
                return 0;
            }
            tab[index][index1 + 1] = '@';
            tab[index][index1 + 2] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
        }
    }
    if (piece == 3)
    {
        int index = SearchColumn(Colonne, tabAL, 3);
        int index1 = SearchLine(index, tab, 3, orientation);
        if (index1 == 0)
        {
            test = 1;
        }
        if (orientation == 1)
        {
            if (Colonne == 'J')
            {
                return 0;
            }
            tab[index][index1 + 2] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 1][index1 + 2] = '@';
        }
        if (orientation == 2)
        {
            if (Colonne == 'J')
            {
                return 0;
            }
            tab[index + 1][index1] = '@';
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index][index1 + 2] = '@';
        }
        if (orientation == 3)
        {
            if (Colonne == 'J' || Colonne == 'I')
            {
                return 0;
            }
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1 + 1] = '@';
        }
        if (orientation == 4)
        {
            if (Colonne == 'J' || Colonne == 'I')
            {
                return 0;
            }
            tab[index][index1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 2][index1] = '@';
            tab[index + 2][index1 + 1] = '@';
        }
    }
    if (piece == 4)
    {
        int index = SearchColumn(Colonne, tabAL, 4);
        int index1 = SearchLine(index, tab, 4, orientation);
        if (index1 == 0)
        {
            test = 1;
        }
        if (orientation == 1)
        {
            if (Colonne == 'J')
            {
                return 0;
            }
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index][index1 + 2] = '@';
            tab[index + 1][index1 + 2] = '@';
        }
        if (orientation == 2)
        {
            if (Colonne == 'J')
            {
                return 0;
            }
            tab[index][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 1][index1 + 2] = '@';
            tab[index + 1][index1] = '@';
        }
        if (orientation == 3)
        {
            if (Colonne == 'J' || Colonne == 'I')
            {
                return 0;
            }
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1 + 1] = '@';
            tab[index + 2][index1] = '@';
        }
        if (orientation == 4)
        {
            if (Colonne == 'J' || Colonne == 'I')
            {
                return 0;
            }
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 2][index1] = '@';
        }
    }
    if (piece == 5)
    {
        int index = SearchColumn(Colonne, tabAL, 5);
        int index1 = SearchLine(index, tab, 5, orientation);
        if (index1 == 0)
        {
            test = 1;
        }
        if (orientation == 1 || orientation == 2)
        {
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index][index1 + 2] = '@';
            tab[index][index1 + 3] = '@';
        }
        if (orientation == 3 || orientation == 4)
        {
            if (Colonne == 'J' || Colonne == 'I' || Colonne == 'H')
            {
                return 0;
            }
            tab[index][index1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 2][index1] = '@';
            tab[index + 3][index1] = '@';
        }
    }
    if (piece == 6)
    {
        if (Colonne == 'J')
        {
            return 0;
        }

        int index = SearchColumn(Colonne, tabAL, 6);
        int index1 = SearchLine(index, tab, 6, orientation);
        if (index1 == 0)
        {
            test = 1;
        }
        tab[index][index1] = '@';
        tab[index][index1 + 1] = '@';
        tab[index + 1][index1] = '@';
        tab[index + 1][index1 + 1] = '@';
    }
    return test;
}
int CalculScore(char tab[10][10], int TabPlein[10])
{
    /*
To verify if the line is full or not and add 10 to score if yes.
          +TabPlein : Table of integers maybe have 0 or 1 : 1 if line is full, 0 if not.
          +TableGame : Table to save the pieces in the grid (TableGame[i] maybe equal to @ or space).
*/
    int i, j, k;
    int Score = 0;
    for (i = 0; i < 10; i++)
    {
        int somme = 0;
        for (j = 0; j < 10; j++)
        {
            if (tab[j][i] == '@')
            {
                somme += 1;
            }
        }
        if (somme == 10)
        {
            TabPlein[i] = 1;
            Score += 10;
        }
    }
    for (k = 0; k < 10; k++)
    {
        if (TabPlein[k] == 1)
        {
            for (i = k; i > 0; i--)
            {
                for (j = 0; j < 10; j++)
                {
                    tab[j][i] = tab[j][i - 1];
                }
            }
            for (j = 0; j < 10; j++)
            {
                tab[j][0] = ' ';
            }
            TabPlein[k] = 0;
        }
    }
    return Score;
}
void SaveScore(char Name[], int Score)
{
    /*
Open a file to save the score and the player's name.
                +Name : String of the player's name.
                +Score : An integer for the score.
*/
    FILE *fichier = NULL;
    fichier = fopen("Score.txt", "a+");
    fprintf(fichier, "%s %d\n", Name, Score);
    fclose(fichier);
}
void DisplayBest(char FileName[])
{
    /*
Open the file to read all the scores and display the best one with player's name.
               +FileName : String for the name of file. example(Tetris.txt).
*/
    char ScoreTest[20];
    char Name[30];
    int score = 0;
    char PlayerName[30];
    FILE *fichier = NULL;
    fichier = fopen(FileName, "r");
    while (!feof(fichier))
    {
        fscanf(fichier, "%s %s", Name, ScoreTest);
        int x = atoi(ScoreTest);
        if (x > score)
        {
            score = x;
            strcpy(PlayerName, Name);
        }
    }
    fclose(fichier);
    couleur_char(ROUGE);
    printf("GAME OVER !");
    printf("Meilleur score est : %d pour le joueur : %s\n", score, PlayerName);
    couleur_char(BLANC);
}
int RandomOrientation() // To choose a random Orientation
{
    int i;
    srand(time(NULL));
    i = (rand() % 4);
    return i;
}