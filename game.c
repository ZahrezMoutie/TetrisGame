#include "headers.h"

void DisplayLine(char TableGame[][10], char TableAll[])
{
    printf("Voici votre grille: \n");
    printf(" %c %c %c %c %c %c %c %c %c %c \n", TableAll[0], TableAll[1], TableAll[2], TableAll[3], TableAll[4], TableAll[5], TableAll[6], TableAll[7], TableAll[8], TableAll[9]);
    for (int i = 0; i < 10; i++)
        printf("|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n", TableGame[0][i], TableGame[1][i], TableGame[2][i], TableGame[3][i], TableGame[4][i], TableGame[5][i], TableGame[6][i], TableGame[7][i], TableGame[8][i], TableGame[9][i]);
}
int SearchColumn(char Letter, char TableAll[10], int piece)
{
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

            tab[index][index1 + 1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 1][index1 + 2] = '@';
        }
        if (orientation == 2)
        {
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index][index1 + 2] = '@';
            tab[index + 1][index1 + 1] = '@';
        }
        if (orientation == 3)
        {
            tab[index][index1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 2][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
        }
        if (orientation == 4)
        {
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
            tab[index][index1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1 + 1] = '@';
        }
        if (orientation == 2)
        {
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1] = '@';
        }
        if (orientation == 3)
        {
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 1][index1 + 2] = '@';
        }
        if (orientation == 4)
        {
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
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1] = '@';
        }
        if (orientation == 2)
        {
            tab[index][index1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1 + 1] = '@';
        }
        if (orientation == 3)
        {
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 1][index1 + 2] = '@';
        }
        if (orientation == 4)
        {
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
            tab[index][index1 + 2] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 1][index1 + 2] = '@';
        }
        if (orientation == 2)
        {
            tab[index + 1][index1] = '@';
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index][index1 + 2] = '@';
        }
        if (orientation == 3)
        {
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1 + 1] = '@';
        }
        if (orientation == 4)
        {
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
            tab[index][index1] = '@';
            tab[index][index1 + 1] = '@';
            tab[index][index1 + 2] = '@';
            tab[index + 1][index1 + 2] = '@';
        }
        if (orientation == 2)
        {
            tab[index][index1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 1][index1 + 2] = '@';
            tab[index + 1][index1] = '@';
        }
        if (orientation == 3)
        {
            tab[index][index1 + 1] = '@';
            tab[index + 1][index1 + 1] = '@';
            tab[index + 2][index1 + 1] = '@';
            tab[index + 2][index1] = '@';
        }
        if (orientation == 4)
        {
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
            tab[index][index1] = '@';
            tab[index + 1][index1] = '@';
            tab[index + 2][index1] = '@';
            tab[index + 3][index1] = '@';
        }
    }
    if (piece == 6)
    {
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
    FILE *fichier = NULL;
    fichier = fopen("Score.txt", "a+");
    fprintf(fichier, "%s %d\n", Name, Score);
    fclose(fichier);
}
void DisplayBest(char FileName[])
{
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

    printf("Meilleur score est : %d pour le joueur : %s\n", score, PlayerName);
}
int convertirTemps()
{
    time_t t = time(NULL);
  struct tm tm = *localtime(&t);

    char Date[10];
    SauvgarderDate();
    GetDate(Date);
    int Time = 0;
    if (Date[6] == '0')
    {
        Time += 0;
    }
    if (Date[6] == '1')
    {
        Time += 10;
    }
    if (Date[6] == '2')
    {
        Time += 20;
    }
    if (Date[6] == '3')
    {
        Time += 30;
    }
    if (Date[6] == '4')
    {
        Time += 40;
    }
    if (Date[6] == '5')
    {
        Time += 50;
    }

    if (Date[7] == '0')
    {
        Time += 0;
    }
    if (Date[7] == '1')
    {
        Time += 1;
    }
    if (Date[7] == '2')
    {
        Time += 2;
    }
    if (Date[7] == '3')
    {
        Time += 3;
    }
    if (Date[7] == '4')
    {
        Time += 4;
    }
    if (Date[7] == '5')
    {
        Time += 5;
    }
    if (Date[7] == '6')
    {
        Time += 6;
    }
    if (Date[7] == '7')
    {
        Time += 7;
    }
    if (Date[7] == '8')
    {
        Time += 8;
    }
    if (Date[7] == '9')
    {
        Time += 9;
    }
    return tm.tm_sec;
}
void SauvgarderDate()
{
    time_t t;
    time(&t);
    FILE *fichier = NULL;
    fichier = fopen("Date.txt", "w");
    fprintf(fichier, "%s\n", ctime(&t));
    fclose(fichier);
}
void GetDate(char Date[])
{
    char Date1[10];
    char Date2[10];
    char Date3[10];
     FILE *fichier = NULL;
    fichier = fopen("Date.txt", "a+");
        fscanf(fichier, "%s %s %s %s", Date1,Date2,Date3,Date);
    fclose(fichier);
}