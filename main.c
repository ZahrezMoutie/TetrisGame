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
    int mode;
    do
    {
        couleur_char(VERT);
        printf("Choisir le mode de difficulte : 1-facile 2 difficile :\n");
        couleur_char(BLANC);
        scanf("%d", &mode);
    } while (mode < 1 || mode > 2);

    do
    {
        couleur_char(VERT);
        printf("Saisir votre Nom\n");
        couleur_char(BLANC);
        scanf("%s", NamePlayer);
    } while (strlen(NamePlayer) <= 1);
    do
    {
        piece = RandomPiece();
        DisplayLine(TableGame, TableAll);
        do
        {
            couleur_char(VERT);
            printf("Choisi l'orientation de la piece:\n");
            couleur_char(BLANC);
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

            time_t begin = time(NULL);
            scanf("%d", &orientation);
            time_t end = time(NULL);
            unsigned long secondes = (unsigned long)difftime(end, begin);
            if (mode = 1)
            {
                if (secondes >= 15)
                {
                    orientation = RandomOrientation() + 1;
                }
            }
            if (mode = 2)
            {
                if (secondes >= 8)
                {
                    orientation = RandomOrientation() + 1;
                }
            }

        } while (orientation < 1 || orientation > 4);
        do
        {
            couleur_char(VERT);
            printf("Choisir la Colonne :\n");
            couleur_char(BLANC);
            scanf("%c", &Column);
            PositionFull = PartPosition(Column, TableGame, TableAll, orientation, piece);
        } while (Column != 'A' && Column != 'B' && Column != 'C' && Column != 'D' && Column != 'E' && Column != 'F' && Column != 'G' && Column != 'H' && Column != 'J' && Column != 'Q');
        Score = CalculScore(TableGame, TableFull);
        FinalScore += Score;

        if (PositionFull == 1)
        {
            SaveScore(NamePlayer, FinalScore);
            DisplayBest("Score.txt");
            Column = 'Q';
        }
    } while (Column != 'Q');
}