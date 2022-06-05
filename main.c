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
    char orientationChar[2];
    char ColumnS[2];
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
    unsigned long secondess, secondes;
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
            orientation = 0;
            time_t begin = time(NULL);
            scanf("%s", orientationChar);
            time_t end = time(NULL);
            secondes = (unsigned long)difftime(end, begin);

            if (orientationChar[0] == '1')
            {
                orientation = 1;
            }
            if (orientationChar[0] == '2')
            {
                orientation = 2;
            }
            if (orientationChar[0] == '3')
            {
                orientation = 3;
            }
            if (orientationChar[0] == '4')
            {
                orientation = 4;
            }

        } while (orientation < 1 || orientation > 4);
        do
        {
            couleur_char(VERT);
            printf("Choisir la Colonne :\n");
            couleur_char(BLANC);
            time_t begin = time(NULL);
            scanf("%s", ColumnS);
            time_t end = time(NULL);
            secondess = (unsigned long)difftime(end, begin);
            if (mode = 1)
            {
                if ((secondes + secondess) >= 30)
                {
                    couleur_char(ROUGE);
                    printf("    Tu as mis beaucoup de temps !! La colonne va etre choisi au hasard. \n");
                    couleur_char(BLANC);
                    orientation = RandomOrientation() + 1;
                }
            }
            if (mode = 2)
            {
                if ((secondes + secondess) >= 16)
                {
                    couleur_char(ROUGE);
                    printf("    Tu as mis beaucoup de temps !! La colonne va etre choisi au hasard. \n");
                    couleur_char(BLANC);
                    orientation = RandomOrientation() + 1;
                }
            }
            Column = ColumnS[0];
            PositionFull = PartPosition(Column, TableGame, TableAll, orientation, piece);
        } while (Column != 'A' && Column != 'B' && Column != 'C' && Column != 'D' && Column != 'E' && Column != 'F' && Column != 'G' && Column != 'H' && Column != 'J' && Column != 'Q' && PositionFull != 0);
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