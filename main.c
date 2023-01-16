#include <stdio.h>

/* Largeur de la grille */
#define Taille 8

/* Pions du jeu */
#define N 'O'  /* joueur 1 */
#define B '0' /* joueur 2 */

#define VIDE ' '
/*
//affiche le plateau avec les 4 premiers pions
void init_Plateau (T_Othellier var);

//affiche la grille et les lettres de A à H
void afficher_Plateau (T_Othellier var);

//permet de savoir si un mouvement est autorisé(case vide ou occupée)
int mouv_valid(T_Othellier var, int hor, int ver, int joueur);

//appel la fonction int mouv_valide pour voir si on peut encore déplacer un pion
int verifie_coup(T_Othellier var, int joueur);

//fait passer le tours au prochain joueur
int joueur_suivant (int joueur);

//permet de savoir si on entre une minuscule dans l'executable
int minuscule(char c);

//place les pions en fonction des coordonnées
void coordonnees_coup (T_Othellier var, int *hor, int *ver, int joueur);

//voit s'il reste encore des pions à joué du côté adverse et du joueur
int partie_fini(T_Othellier var);

//mais en place les rêgles de l'othello
void jouer_coup(T_Othellier var, int hor, int ver, int joueur);
*/

/* Type du plateau de jeu */
typedef char T_Othellier[Taille][Taille];

// typedef struct Coordonnees Coordonnees;
// struct Coordonnees
// {
//     int x;
//     char y;
// };

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
                printf ("\033[37m %c \033[0m|", var[i][j]); /* Les blancs en blanc*/
            else
                printf ("\033[31m %c \033[0m|", var[i][j]); /* Les noirs en rouge */
        printf (" %d\n+", i+1); /* on affecte puis on incrémente*/
        for (j=0; j<Taille; j++)
            printf ("---+");
        printf ("\n");
    }
}

int mouv_valid(T_Othellier var, int hor, int ver, int joueur) {
    int i, j;
    char adversaire;
            if(joueur == 1) adversaire = N;
        else adversaire = B;
    

    for (i=-1;i<=1;i++) {
        for (j=-1;j<=1;j++) {
            if(i==0 && j==0) {
                continue;
            }
                int x = hor + i, y = ver + j;
                    if (x<0||x>=Taille||y<0||y>=Taille) {
                        continue;
        }
                if (var[x][y]!=adversaire) {
                        continue;
        }

        while(x>=0 && x<Taille && y>=0 && y<Taille) {
            if (var[x][y]!=adversaire) {
                break;
            }
                x=x+i;
                y=y+j;
            }
                if (x>=0 && x<Taille && y>=0 && y<Taille && var[x][y]==adversaire) {
                return 1;
                }
        }
    }
    return 0;
}

int verifie_coup(T_Othellier var, int joueur) {
    for (int i = 0; i < Taille; i++) {
        for (int j = 0; j < Taille; j++) {
            if (mouv_valid(var, i, j, joueur)) {
                return 1;
            }
        }
    }
    return 0;
}

int joueur_suivant (int joueur) {
    if (joueur == 1) {
        return 2;
    }
    else {
        return 1;
    }
}

int minuscule(char c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
        }

    return 0;

}

void coordonnees_coup (T_Othellier var, int *hor, int *ver, int joueur) {
    char c;
    int input_valid = 0;

    while (input_valid == 0) {
        printf ("\nC'est au tour du joueur %d de jouer\n", joueur);
        printf ("Choisissez une case (ex: A1) :\n");
        scanf ("\n%c", &c);
        /* On change les minuscules en majuscules */
        if (minuscule(c)==1) {
            c = c - 'a' + 'A';
        }
        if (c >= 'A' && c <= 'H') {
            (*hor) = c - 'A';
            scanf ("%d", ver);
            if (*ver >= 1 && *ver <= 8) {
                (*ver)--;
                input_valid = 1;
            } else {
                printf("Invalid input, please enter a number between 1 and 8\n");
            }
        } else {
            printf("Invalid input, please enter a letter between A and H\n");
        }
    }
}

int partie_fini(T_Othellier var) {
    int i, j;
    int noir_count = 0, blanc_count = 0;
    int vide_count = 0;
    for (i = 0; i < Taille; i++) {
        for (j = 0; j < Taille; j++) {
            if (var[i][j] == N) {
                noir_count++;
            } else if (var[i][j] == B) {
                blanc_count++;
            } else if (var[i][j] == VIDE) {
                vide_count++;
            }
        }
    }
    if (vide_count == 0 || (verifie_coup(var, 1) == 0 && verifie_coup(var, 2) == 0)) {
        printf("La partie est finie! Le joueur noir a %d pions et le joueur blanc a %d pions.\n", noir_count, blanc_count);
        return 1;
    }
    return 0;
}

void jouer_coup(T_Othellier var, int hor, int ver, int joueur) {
    char adversaire;
    if (joueur == 1) {
        adversaire = N;
    } else {
        adversaire = B;
    }
    var[hor][ver] = adversaire;
    for (int i=-1;i<=1;i++) {
        for (int j=-1;j<=1;j++) {
            if(i==0 && j==0) {
                continue;
            }
            int x = hor + i, y = ver + j;
            if (x<0||x>=Taille||y<0||y>=Taille) {
                continue;
            }
            if (var[x][y] != adversaire) {
                continue;
            }
            while (x >= 0 && x < Taille && y >= 0 && y < Taille) {
                if (var[x][y] != adversaire) {
                    break;
                }
                x = x + i;
                y = y + j;
            }
            if (x >= 0 && x < Taille && y >= 0 && y < Taille && var[x][y] == adversaire) {
                x = x - i;
                y = y - j;
                while (x != hor || y != ver) {
                    var[x][y] = adversaire;
                    x = x - i;
                    y = y - j;
                }
            }
        }
    }
}


int main() {
    T_Othellier plateau;
    int joueur = 1;
    int hor, ver;

    init_Plateau(plateau);
    afficher_Plateau(plateau);

while((verifie_coup(plateau, joueur)) {
coordonnees_coup(plateau, &hor, &ver, joueur);
if(mouv_valid(plateau, hor, ver, joueur)) {
jouer_coup(plateau, hor, ver, joueur);
}
joueur = joueur_suivant(joueur);
afficher_Plateau(plateau);
}
}
