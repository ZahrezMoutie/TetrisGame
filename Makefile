tetris:main.o piece.o game.o couleur.o
	gcc main.o piece.o game.o couleur.o -o tetris -g; ./tetris
main.o:main.c
	gcc -c main.c 
piece.o:piece.c
	gcc -c piece.c 
game.o:game.c
	gcc -c game.c 
couleur.o:couleur.c
	gcc -c couleur.c 
