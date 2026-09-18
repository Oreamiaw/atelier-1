//instrument de Jayson DUBOST et Tristan CROMBECQUE
#include <stdio.h>

int speed = 85; //définir la vitesse à 85kts
int alt = 950; // définir l'altitude à 2500ft
int hdg = 315; //définir le cap suivi



int main() {
//le décallage aux lignes 8 et 9 est du à l'utilisation du slash inversé

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
    printf("|             |  -  |W|  -  |%3d|  -  |N|  -  |            |\n", hdg);
    printf("+----------------------------------------------------------+\n");
    



    return 0;
}
