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
                printf ("\033[33m %c \033[0m|", var[i][j]); /* Les blancs en rouge */
            else
                printf ("\033[31m %c \033[0m|", var[i][j]); /* Les noirs en bleu */
        printf (" %d\n+", i+1); /* on affecte puis on incrémente*/
        for (j=0; j<Taille; j++)
            printf ("---+");
        printf ("\n");
    }
}
/* Fonction pour verifier qu'une case existe */
int case_existe (int hor, int ver) {
    return ((ver>=0)&&(ver<N)&&(hor>=0)&&(hor<N));
    }
int is_valid_move(T_Othellier var, int hor, int ver, int player) {
int i, j;
char opponent;
        if(player == 1) opponent = N;
    else opponent = B;
int found = 0;

for (i=-1;i<=1;i++) {
    for (j=-1;j<=1;j++) {
        if(i==0&&j==0) {
            continue;
}
        int x = hor + i, y = ver + j;
            if (x<0||x>=Taille||y<0||y>=Taille) {
                continue;
}
        if (var[x][y]!=opponent) {
                continue;
}
while(x>=0&&x<Taille&&y>=0&&y<Taille) {
        if (var[x][y]!=opponent) {
                break;
}
    x += i;
    y += j;
}
        if (x>=0&&x<Taille&&y>=0&&y<Taille&&var[x][y]==opponent) {
        return 1;
        }
    }
}
return 0;
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
