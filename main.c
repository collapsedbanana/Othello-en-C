#include <stdio.h>

/* Largeur de la grille */
#define Taille 8

/* Pions du jeu */
#define N 'X'  /* joueur 1 */
#define B 'O' /* joueur 2 */

#define VIDE ' '

/* Type du plateau de jeu */
typedef char T_Othellier[Taille][Taille];

/* Fonction pour initialiser la grille */
void init_Plateau (T_Othellier var) {
    int i, j;

    /* On met tout a vide */
    for (i=0; i<Taille; i++)
        for (j=0; j<Taille; j++)
            var[i][j] = VIDE;
    // Place the initial pieces on the board
    var[3][3] = N;
    var[3][4] = B;
    var[4][3] = B;
    var[4][4] = N;
}

/* Fonction pour afficher la grille */
void afficher_Plateau (T_Othellier var) {
    int i, j;
    char a = 'A';

    /* Affichage des lettres */
    printf ("\n");
    for (i=0; i<Taille; i++) {
        printf ("  %c ", a);
        a++;
    }

    /* Affichage de la grille */
    printf ("\n+");
    for (i=0; i<Taille; i++)
        printf ("---+");
    printf ("\n");
    for (i=0; i<Taille; i++) {
        printf ("|");
        for (j=0; j<Taille; j++)
            if (var[i][j] == B)
                printf ("\033[31m %c \033[0m|", var[i][j]); /* Les blancs en rouge */
            else
                printf ("\033[34m %c \033[0m|", var[i][j]); /* Les noirs en bleu */
        printf (" %d\n+", i+1);
        for (j=0; j<Taille; j++)
            printf ("---+");
        printf ("\n");
    }
}
int main () {
    T_Othellier var;
    int lig, col, joueur = 1;

    /* Initialisation du jeu */
    init_Plateau(var);
    afficher_Plateau(var);

    return 0;
}


// pour choisir la couleur : https://gist.github.com/vratiu/9780109
============================================================================
