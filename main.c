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
    char orientationChar[20];
    char ColumnS[20];
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
    char modeS[20];
    unsigned long secondess, secondes;
    do
    {
        mode = 0;
        couleur_char(VERT);
        printf("Choisir le mode de difficulte : 1-facile 2 difficile :\n");
        couleur_char(BLANC);
        scanf("%s", modeS);
        if (modeS[0] == '1' && strlen(modeS) == 1)
        {
            mode = 1;
        }
        if (modeS[0] == '2' && strlen(modeS) == 1)
        {
            mode = 2;
        }
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

            if (orientationChar[0] == '1' && strlen(orientationChar) == 1)
            {
                orientation = 1;
            }
            if (orientationChar[0] == '2' && strlen(orientationChar) == 1)
            {
                orientation = 2;
            }
            if (orientationChar[0] == '3' && strlen(orientationChar) == 1)
            {
                orientation = 3;
            }
            if (orientationChar[0] == '4' && strlen(orientationChar) == 1)
            {
                orientation = 4;
            }
            if (mode == 1)
            {
                if ((secondes) >= 15)
                {
                    couleur_char(ROUGE);
                    printf("    Tu as mis trop de temps !! L'orientation a ete choisi au hasard. \n");
                    couleur_char(BLANC);
                    orientation = RandomOrientation() + 1;
                }
            }
            if (mode == 2)
            {
                if ((secondes) >= 8)
                {
                    couleur_char(ROUGE);
                    printf("    Tu as mis trop de temps !! L'orientation a ete choisi au hasard. \n");
                    couleur_char(BLANC);
                    orientation = RandomOrientation() + 1;
                }
            }

        } while (orientation < 1 || orientation > 4);
        do
        {
            do
            {

                couleur_char(VERT);
                printf("Choisir la Colonne :\n");
                couleur_char(BLANC);
                time_t begin = time(NULL);
                scanf("%s", ColumnS);
                time_t end = time(NULL);
                secondess = (unsigned long)difftime(end, begin);
                if (strlen(ColumnS) != 1)
                {
                    Column = 'Z';
                }
                else
                    Column = ColumnS[0];
                if (mode == 1)
                {
                    if (secondess >= 15)
                    {
                        couleur_char(ROUGE);
                        printf("    Tu as mis trop de temps !! La colonne a ete choisi au hasard. \n");
                        couleur_char(BLANC);
                        Column = RandomColumn();
                    }
                }
                if (mode == 2)
                {
                    if (secondess >= 8)
                    {
                        couleur_char(ROUGE);
                        printf("    Tu as mis trop de temps !! La colonne a ete choisi au hasard. \n");
                        couleur_char(BLANC);
                        Column = RandomColumn();
                    }
                }

                PositionFull = PartPosition(Column, TableGame, TableAll, orientation, piece);
            } while (PositionFull != 0);
        } while (Column != 'A' && Column != 'B' && Column != 'C' && Column != 'D' && Column != 'E' && Column != 'F' && Column != 'G' && Column != 'H' && Column != 'J');
        Score = CalculScore(TableGame, TableFull);
        FinalScore += Score;

        if (PositionFull == 1)
        {
            SaveScore(NamePlayer, FinalScore);
            DisplayBest("Score.txt");
        }
    } while (PositionFull != 1);
}