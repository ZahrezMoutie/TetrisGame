#include "headers.h"
void DisplayPieceT() // To display piece T
{
    couleur_char (ROUGE);
    printf("  @        @       @@@       @\n");
    printf(" @@        @@       @       @@@\n");
    printf("  @        @                 \n");
    couleur_char (BLANC);
}
void DisplayPieceZ() // To display piece Z
{
    couleur_char (VERT);
    printf(" @@        @@       @        @ \n");
    printf("  @@      @@        @@      @@     \n");
    printf("                     @      @\n");
    couleur_char (BLANC);
}
void DisplayPieceS() // To display piece S
{
    couleur_char (ORANGE);
    printf("  @@      @@        @        @\n");
    printf(" @@        @@       @@      @@ \n");
    printf("                     @      @ \n");
    couleur_char (BLANC);
}
void DisplayPieceO() // To display piece O
{
    couleur_char (BLEU);
    printf(" @@        @@       @@       @@\n");
    printf(" @@        @@       @@       @@\n");
    couleur_char (BLANC);

}
void DisplayPieceJ() // To display piece J
{
    couleur_char (MAGENTA);
    printf("  @        @@     @          @@@\n");
    printf("  @        @      @@@          @\n");
    printf(" @@        @                 \n");
    couleur_char (BLANC);
}
void DisplayPieceL() // To display piece L
{
    couleur_char (CYAN);
    printf("  @       @@        @        @@@\n");
    printf("  @        @      @@@        @\n");
    printf("  @@       @                 \n");
    couleur_char (BLANC);
}
void DisplayPieceI() // To display piece I
{
    couleur_char (ROUGE);
    printf("  @        @       @@@@       @@@@\n");
    printf("  @        @                   \n");
    printf("  @        @                 \n");
    printf("  @        @                 \n");
    couleur_char (BLANC);
}
int RandomPiece() // To choose a random piece
{
int i ;
srand(time(NULL));
i=(rand()%7);
 return i ;
}