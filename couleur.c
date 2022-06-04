#include "headers.h"
void couleur_char(char c)
{
   switch (c) {
      case NOIR    : printf("\033[30m" ); break;
      case ROUGE   : printf("\033[31m" ); break;
      case VERT    : printf("\033[32m" ); break;
      case ORANGE  : printf("\033[33m" ); break;
      case BLEU    : printf("\033[34m" ); break;
      case MAGENTA : printf("\033[35m" ); break;
      case CYAN    : printf("\033[36m" ); break;
      case BLANC   : printf("\033[37m" ); break;
      case JAUNE   : printf("\033[00m" ); break;
      default      : printf("\ncouleur non répertoriée\n");
   }
}