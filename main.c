#include <stdio.h>

/* Largeur de la grille */
#define Taille 8

/* Pions du jeu */
#define VIDE ' '
#define N 'X'  /* joueur 1 */
#define B 'O' /* joueur 2 */

/* Type du plateau de jeu */
typedef char T_Othellier[Taille][Taille];

/* Fonction pour initialiser la grille */
void init_matrice (T_Othellier m) {
    int i, j;

    /* On met tout a vide */
    for (i=0; i<Taille; i++)
        for (j=0; j<Taille; j++)
            m[i][j] = VIDE;

    /* On place les 4 premiers pions */
    m[Taille/2-1][Taille/2-1] = N;
    m[Taille/2-1][Taille/2] = B;
    m[Taille/2][Taille/2-1] = B;
    m[Taille/2][Taille/2] = N;
}

/* Fonction pour afficher la grille */
void afficher_matrice (T_Othellier m) {
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
            if (m[i][j] == B)
                printf ("\033[31m %c \033[0m|", m[i][j]); /* Les blancs en rouge */
            else
                printf ("\033[34m %c \033[0m|", m[i][j]); /* Les noirs en bleu */
        printf (" %d\n+", i+1);
        for (j=0; j<Taille; j++)
            printf ("---+");
        printf ("\n");
    }
}
int main () {
    T_Othellier m;
    int lig, col, joueur = 1;

    /* Initialisation du jeu */
    init_matrice (m);
    afficher_matrice (m);

    return 0;
}

// pour choisir la couleur : https://gist.github.com/vratiu/9780109
