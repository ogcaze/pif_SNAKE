#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

#define MAX_RECORD 5

int cobra[300][2]; //matriz do corpinho da cobra
int maca[2]; //matriz da maçã (ou akuma no mi num futuro distante)
int pontos = 1; //pontuação do player
int cx = 2, cy = 2; //coordenadas x e y
