//instrument de Jayson DUBOST et Tristan CROMBECQUE

//bienvenue sur le programme. Ce dernier inclus des valeurs aléatoires pour toutes les valeures numériques du programme.
//Spécificités :
//L'altimètre est relié au QNH (pression atmosphérique) comme sur un vrai instrument
//Les points cardinaux sont liés au cap suivi (aléatoire lui aussi)



//définition des variables et appels
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int speed;//définir la vitesse à 0kts
int alt; // définir l'altitude à 0ft
int hdg; //définir le cap suivi
float QNH; // pression de référence (inHg)

#define QNH_STD 29.92   // QNH standard de référence
#define ALT_BASE 950    // altitude de base quand QNH = QNH_STD


int main() {
//valeures de la vitesse et de l'altitude prises aléatoirement

    srand(time(NULL)); // initialisation du générateur aléatoire
    speed = rand() % 100; // speed devient aléatoire entre 0 et 99kts
    alt = rand() % 10000; // alt devient aléatoire entre 0 et 9999ft
    hdg = rand() % 360; // hdg devient aléatoire entre 0 et 359
    QNH = 28.0 + (rand() % 1001) / 100.0; // QNH aléatoire entre 25.00 et 35.00

    // pour chaque +0.01 de QNH par rapport à QNH_STD, alt augmente de 10ft
    alt = ALT_BASE + (int)((QNH - QNH_STD) * 1000); 
    // (QNH - QNH_STD) donne un écart en inHg, *1000 convertit chaque 0.01 en 10ft

    char gauche, droite; //utilisation du char pour les points cardinaux

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
    printf("|  |   |                                       %.2f|   |  |\n",QNH);
    printf("|  +---+                                            +---+  |\n");
    printf("|              _______________|_______________             |\n");
    printf("|             |  -  |%c|  -  |%3d|  -  |%c|  -  |            |\n",gauche, hdg, droite);
    printf("+----------------------------------------------------------+\n");
    
    return 0;
}
