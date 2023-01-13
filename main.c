#include <stdio.h>

/* Largeur de la grille */
#define N 8

/* Pions du jeu */
#define VIDE ' '
#define NOIR 'X'  /* joueur 1 */
#define BLANC 'O' /* joueur 2 */

/* Type du plateau de jeu */
typedef char t_matrice[N][N];

/* Fonction pour initialiser la grille */
void init_matrice (t_matrice m) {
    int i, j;

    /* On met tout a vide */
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            m[i][j] = VIDE;

    /* On place les 4 premiers pions */
    m[N/2-1][N/2-1] = NOIR;
    m[N/2-1][N/2] = BLANC;
    m[N/2][N/2-1] = BLANC;
    m[N/2][N/2] = NOIR;
}

/* Fonction pour afficher la grille */
void afficher_matrice (t_matrice m) {
    int i, j;
    char a = 'A';

    /* Affichage des lettres */
    printf ("\n");
    for (i=0; i<N; i++) {
        printf ("  %c ", a);
        a++;
    }

    /* Affichage de la grille */
    printf ("\n+");
    for (i=0; i<N; i++)
        printf ("---+");
    printf ("\n");
    for (i=0; i<N; i++) {
        printf ("|");
        for (j=0; j<N; j++)
            if (m[i][j] == BLANC)
                printf ("\033[31m %c \033[0m|", m[i][j]); /* Les blancs en rouge */
            else
                printf ("\033[34m %c \033[0m|", m[i][j]); /* Les noirs en bleu */
        printf (" %d\n+", i+1);
        for (j=0; j<N; j++)
            printf ("---+");
        printf ("\n");
    }
}
int main () {
    t_matrice m;
    int lig, col, joueur = 1;

    /* Initialisation du jeu */
    init_matrice (m);
    afficher_matrice (m);

    return 0;
}
