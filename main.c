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

/* Fonction pour verifier qu'une case existe */
int case_existe (int lig, int col) {
    return ((col >= 0) && (col < N) && (lig >= 0) && (lig < N));
}

/* Fonction pour verifier qu'un coup est valide */
int coup_valide (t_matrice m, int lig, int col, int joueur) {
    int i, j, ok;
    char cj, ca;

    /* On definit la couleur du joueur et celle de l'adversaire */
    if (joueur == 1) {
        cj = NOIR;
        ca = BLANC;
    } else {
        cj = BLANC;
        ca = NOIR;
    }
    if (!case_existe(lig, col) || m[lig][col] != VIDE) return 0;

    /* Vertical vers le haut */
    i = lig - 1;
    ok = 0;
    while (case_existe(i, col) && m[i][col] == ca) {
        i--;
        ok = 1;
    }
    if (case_existe(i, col) && m[i][col] == cj && ok == 1) return 1;

    /* Vertical vers le bas */
    i = lig + 1;
    ok = 0;
    while (case_existe(i, col) && m[i][col] == ca) {
        i++;
        ok = 1;
    }
    if (case_existe(i, col) && m[i][col] == cj && ok == 1) return 1;

    /* Horizontal vers la gauche */
    j = col - 1;
    ok = 0;
    while (case_existe(lig, j) && m[lig][j] == ca) {
        j--;
        ok = 1;
    }
    if (case_existe(lig, j) && m[lig][j] == cj && ok == 1) return 1;

    /* Horizontal vers la droite */
    j = col + 1;
    ok = 0;
    while (case_existe(lig, j) && m[lig][j] == ca) {
        j++;
        ok = 1;
    }
    if (case_existe(lig, j) && m[lig][j] == cj && ok == 1) return 1;

    /* Diagonal \ vers le haut */
    i = lig - 1;
    j = col - 1;
    ok = 0;
    while (case_existe(i, j) && m[i][j] == ca) {
        i--;
        j--;
        ok = 1;
    }
    if (case_existe(i, j) && m[i][j] == cj && ok == 1) return 1;

    /* Diagonal \ vers le bas */
    i = lig + 1;
    j = col + 1;
    ok = 0;
    while (case_existe(i, j) && m[i][j] == ca) {
        i++;
        j++;
        ok = 1;
    }
    if (case_existe(i, j) && m[i][j] == cj && ok == 1) return 1;

    /* Diagonal / vers le haut */
    i = lig - 1;
    j = col + 1;
    ok = 0;
    while (case_existe(i, j) && m[i][j] == ca) {
        i--;
        j++;
        ok = 1;
    }
    if (case_existe(i, j) && m[i][j] == cj && ok == 1) return 1;

    /* Diagonal / vers le bas */
    i = lig + 1;
    j = col - 1;
    ok = 0;
    while (case_existe(i, j) && m[i][j] == ca) {
        i++;
        j--;
        ok = 1;
    }
    if (case_existe(i, j) && m[i][j] == cj && ok == 1) return 1;

    return 0;
}

/* Fonction qui determine si un joueur peut encore jouer */
int peut_jouer (t_matrice m, int joueur) {
    int i, j;
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            if (coup_valide(m, i, j, joueur)) return 1; /* Le joueur peut encore jouer */

    /* Le joueur ne peut plus jouer */
    return 0;
}

/* Renvoie le numero du joueur suivant */
int joueur_suivant (int joueur) {
    return (joueur %2 + 1);
}

/* Permet au joueur de choisir un coup */
void choisir_coup (t_matrice m, int *lig, int *col, int joueur) {
    char c;
    printf ("\nC'est au tour du joueur %d de jouer\n", joueur);
    printf ("Choisissez une case (ex: A1) :\n");
    scanf ("\n%c", &c);
    /* On change les minuscules en majuscules */
    if ((c >= 'a') && (c < 'a'+N))
        c = c + 'A' - 'a';
    (*col) = c - 'A';
    scanf ("%d", lig);
    (*lig)--;

    /* On redemande de choisir tant que le coup n'est pas accepte */
    while (!coup_valide (m, *lig, *col, joueur)) {
        printf ("\nCe coup n'est pas valide\n");
        printf ("Choisissez une autre case (ex: A1) :\n");
        scanf ("\n%c", &c);
        /* On change les minuscules en majuscules */
        if ((c >= 'a') && (c < 'a'+N))
            c = c + 'A' - 'a';
        (*col) = c - 'A';
        scanf ("%d", lig);
        (*lig)--;
    }
}

/* Verifie si la partie est terminee */
int partie_terminee (t_matrice m) {
    int i, j, nb_noir, nb_blanc, cpt;

    /* On compte les pions noirs et les blancs */
    nb_noir = 0;
    nb_blanc = 0;
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            if (m[i][j] == VIDE && (peut_jouer(m, 1) || peut_jouer(m, 2))) {
                return 0; /* La partie n'est pas finie */
            } else {
                if (m[i][j] == NOIR) nb_noir++;
                else if (m[i][j] == BLANC) nb_blanc++;
            }
        }
    }

    /* La partie est terminee, on affiche le gagnant */
    if (nb_noir > nb_blanc)
        printf ("\nLe joueur 1 a gagne !!!\n");
    else if (nb_blanc > nb_noir)
        printf ("\nLe joueur 2 a gagne !!!\n");
    else printf ("\nLes deux joueurs sont a egalite\n");

    /* On range les pions par couleur et on affiche la grille */
    cpt = 0;
    for (i=0; i<N; i++)
        for (j=0; j<N; j++) {
            if (cpt < nb_noir)
                m[i][j] = NOIR;
            else if ((cpt >= nb_noir) && (cpt < nb_noir + nb_blanc -1))
                m[i][j] = BLANC;
            else m[i][j] = VIDE;
                cpt++;
        }
    afficher_matrice (m);
    printf ("\n");
    return 1;
}

/* Fonction qui permet de jouer un coup */
void jouer_coup (t_matrice m, int lig, int col, int joueur) {
    int i, j;
    char cj, ca;

    if (joueur == 1) {
        cj = NOIR;
        ca = BLANC;
    } else {
        cj = BLANC;
        ca = NOIR;
    }
    m[lig][col] = cj;

    /* Vertical vers le haut */
    i = lig - 1;
    while (case_existe(i, col) && m[i][col] == ca) i--;
    if (case_existe(i, col) && m[i][col] == cj) {
        i = lig - 1;
        while (m[i][col] == ca) {
            m[i][col] = cj;
            i--;
        }
    }

    /* Vertical vers le bas */
    i = lig + 1;
    while (case_existe(i, col) && m[i][col] == ca) i++;
    if (case_existe(i, col) && m[i][col] == cj) {
        i = lig + 1;
        while (m[i][col] == ca) {
            m[i][col] = cj;
            i++;
        }
    }

    /* Horizontal vers la gauche */
    j = col - 1;
    while (case_existe(lig, j) && m[lig][j] == ca) j--;
    if (case_existe(lig, j) && m[lig][j] == cj) {
        j = col - 1;
        while (m[lig][j] == ca) {
            m[lig][j] = cj;
            j--;
        }
    }

    /* Horizontal vers la droite */
    j = col + 1;
    while (case_existe(lig, j) && m[lig][j] == ca) j++;
    if (case_existe(lig, j) && m[lig][j] == cj) {
        j = col + 1;
        while (m[lig][j] == ca) {
            m[lig][j] = cj;
            j++;
        }
    }

    /* Diagonal \ vers le haut */
    i = lig - 1;
    j = col - 1;
    while (case_existe(i, j) && m[i][j] == ca) {
        i--;
        j--;
    }
    if (case_existe(i, j) && m[i][j] == cj) {
        i = lig - 1;
        j = col - 1;
        while (m[i][j] == ca) {
            m[i][j] = cj;
            i--;
            j--;
        }
    }

    /* Diagonal \ vers le bas */
    i = lig + 1;
    j = col + 1;
    while (case_existe(i, j) && m[i][j] == ca) {
        i++;
        j++;
    }
    if (case_existe(i, j) && m[i][j] == cj) {
        i = lig + 1;
        j = col + 1;
        while (m[i][j] == ca) {
            m[i][j] = cj;
            i++;
            j++;
        }
    }

    /* Diagonal / vers le haut */
    i = lig - 1;
    j = col + 1;
    while (case_existe(i, j) && m[i][j] == ca) {
        i--;
        j++;
    }
    if (case_existe(i, j) && m[i][j] == cj) {
        i = lig - 1;
        j = col + 1;
        while (m[i][j] == ca) {
            m[i][j] = cj;
            i--;
            j++;
        }
    }

    /* Diagonal \ vers le bas */
    i = lig + 1;
    j = col - 1;
    while (case_existe(i, j) && m[i][j] == ca) {
        i++;
        j--;
    }
    if (case_existe(i, j) && m[i][j] == cj) {
        i = lig + 1;
        j = col - 1;
        while (m[i][j] == ca) {
            m[i][j] = cj;
            i++;
            j--;
        }
    }
}

/* Le main */
int main () {
    t_matrice m;
    int lig, col, joueur = 1;

    /* Initialisation du jeu */
    init_matrice (m);
    afficher_matrice (m);

    /* Deroulement d'une partie */
    while (!partie_terminee (m)) {
        choisir_coup (m, &lig, &col, joueur);
        jouer_coup (m, lig, col, joueur);
        afficher_matrice (m);
        if (peut_jouer(m, joueur_suivant(joueur)))
            joueur = joueur_suivant (joueur);
        else printf ("\nLe joueur %d passe son tour\n", joueur_suivant(joueur));
    }
    return 0;
}
