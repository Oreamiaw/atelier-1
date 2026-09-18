//instrument de Jayson DUBOST et Tristan CROMBECQUE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int speed = 0; //définir la vitesse à 0kts
int alt = 0; // définir l'altitude à 0ft
int hdg = 0; //définir le cap suivi


int main() {
//valeures de la vitesse et de l'altitude prises aléatoirement

    srand(time(NULL)); // initialisation du générateur aléatoire
    speed = rand() % 100; // speed devient aléatoire entre 0 et 99kts
    alt = rand() % 10000; // alt devient aléatoire entre 0 et 9999ft
    hdg = rand() % 360; // hdg devient aléatoire entre 0 et 359

    char gauche, droite;

    if (hdg >= 0 && hdg < 90) {
        gauche = 'N';
        droite = 'E';
    } else if (hdg >= 90 && hdg < 180) {
        gauche = 'E';
        droite = 'S';
    } else if (hdg >= 180 && hdg < 270) {
        gauche = 'S';
        droite = 'W';
    } else { // hdg entre 270 et 359
        gauche = 'W';
        droite = 'N';
    }

    printf("+----------------------------------------------------------+\n");
    printf("|                                                          |\n");
    printf("|                          /--A--\\                         |\n");
    printf("|  +---+                  /       \\                 +---+  |\n");
    printf("|  |   |                                            |   |  |\n");
    printf("|  | - |                 5---------5                | - |  |\n");
    printf("|  |   |                                            |   |  |\n");
    printf("|  |   |                     ---                    |   |  |\n");
    printf("|  | - |                                            | - |  |\n");
    printf("|  |   | __     ________             _______   ____ |   |  |\n");
    printf("|--|---|<%2d|-----------||-----+-----||--------|%4d>|---|--|\n", speed, alt); 
    printf("|  |   ||__|           ||           ||        |____||   |  |\n");
    printf("|  | - |kts                                       ft| - |  |\n");
    printf("|  |   |                     ---                    |   |  |\n");
    printf("|  |   |                                            |   |  |\n");
    printf("|  | - |                 5---------5                | - |  |\n");
    printf("|  |   |                                       29.92|   |  |\n");
    printf("|  +---+                                            +---+  |\n");
    printf("|              _______________|_______________             |\n");
    printf("|             |  -  |%c|  -  |%3d|  -  |%c|  -  |            |\n",gauche, hdg, droite);
    printf("+----------------------------------------------------------+\n");
    



    return 0;
}
