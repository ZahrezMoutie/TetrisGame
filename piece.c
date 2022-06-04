#include "headers.h"
void DisplayPieceT()
{
    couleur_char (ROUGE);
    printf("  @        @       @@@       @\n");
    printf(" @@        @@       @       @@@\n");
    printf("  @        @                 \n");
    couleur_char (BLANC);
}
void DisplayPieceZ()
{
    couleur_char (ROUGE);
    printf(" @@        @@       @        @ \n");
    printf("  @@      @@        @@      @@     \n");
    printf("                     @      @\n");
    couleur_char (BLANC);
}
void DisplayPieceS()
{
    couleur_char (ROUGE);
    printf("  @@      @@        @        @\n");
    printf(" @@        @@       @@      @@ \n");
    printf("                     @      @ \n");
    couleur_char (BLANC);
}
void DisplayPieceO()
{
    couleur_char (ROUGE);
    printf(" @@        @@       @@       @@\n");
    printf(" @@        @@       @@       @@\n");
    couleur_char (BLANC);

}
void DisplayPieceJ()
{
    couleur_char (ROUGE);
    printf("  @        @@     @          @@@\n");
    printf("  @        @      @@@          @\n");
    printf(" @@        @                 \n");
    couleur_char (BLANC);
}
void DisplayPieceL()
{
    couleur_char (ROUGE);
    printf("  @       @@        @        @@@\n");
    printf("  @        @      @@@        @\n");
    printf("  @@       @                 \n");
    couleur_char (BLANC);
}
void DisplayPieceI()
{
    couleur_char (ROUGE);
    printf("  @        @       @@@@       @@@@\n");
    printf("  @        @                   \n");
    printf("  @        @                 \n");
    printf("  @        @                 \n");
    couleur_char (BLANC);
}
int RandomPiece()
{
int i ;
srand(time(NULL));
i=(rand()%7);
 return i ;
}