#include "headers.h"
void main()
{
    char TableAll[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char TableGame[10][10];
    int TableFull[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, j;
    int Score;
    int FinalScore = 0;
    char NamePlayer[20];
    int PositionFull;
    int TAV = 0, TAP = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            TableGame[i][j] = ' ';
        }
    }
    int piece;
    char Column;
    int orientation;

    do
    {
        printf("Saisir votre Nom\n");
        scanf("%s", NamePlayer);
    } while (strlen(NamePlayer) <= 4);
    do
    {
        piece = RandomPiece();
        DisplayLine(TableGame, TableAll);
        do
        {
            printf("Choisi l'orientation de la piece:\n");
            printf("  1        2        3        4\n");
            if (piece == 0)
            {
                DisplayPieceT();
            }
            else if (piece == 1)
            {
                DisplayPieceZ();
            }
            else if (piece == 2)
            {
                DisplayPieceS();
            }
            else if (piece == 3)
            {
                DisplayPieceJ();
            }
            else if (piece == 4)
            {
                DisplayPieceL();
            }
            else if (piece == 5)
            {
                DisplayPieceI();
            }
            else if (piece == 6)
            {
                DisplayPieceO();
            }

           // TAV = convertirTemps();
            scanf("%d", &orientation);
            //TAP = convertirTemps();
           /* if((TAP-TAV)>=5)
            {
             orientation=1;
            }*/

        } while (orientation < 1 || orientation > 4);
        do
        {
            printf("Choisir la Colonne :\n");
            scanf("%c", &Column);
            PositionFull = PartPosition(Column, TableGame, TableAll, orientation, piece);
        } while (Column != 'A' && Column != 'B' && Column != 'C' && Column != 'D' && Column != 'E' && Column != 'F' && Column != 'G' && Column != 'H' && Column != 'J' && Column != 'I' && Column != 'Q');
        Score = CalculScore(TableGame, TableFull);
        FinalScore += Score;

        if (PositionFull == 1)
        {
            Column = 'Q';
        }
        if (Column == 'Q')
        {
            SaveScore(NamePlayer, FinalScore);
            DisplayBest("Score.txt");
        }

    } while (Column != 'Q');
}