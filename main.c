#include <stdio.h>


#define Taille 8

#define N 'C'  /* joueur 1 */
#define B 'O' /* joueur 2 */

#define VIDE ' '

typedef char T_Othellier[Taille][Taille];


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


void afficher_Plateau (T_Othellier var) {
    int i, j;
    char a = 'A';

    /* Affichage des lettres */
    printf ("\n");
    for (i=0; i<Taille; i++) {
        printf ("  %c ", a);
        a++;
    }

    
    printf ("\n+");
    for (i=0; i<Taille; i++)
        printf ("---+");
    printf ("\n");
    for (i=0; i<Taille; i++) {
        printf ("|");
        for (j=0; j<Taille; j++)
            if (var[j][i] == B)
                printf ("\033[37m %c \033[0m|", var[j][i]); /* Les blancs en blanc*/
            else
                printf ("\033[31m %c \033[0m|", var[j][i]);
                         /* Les noirs en rouge */
        printf (" %d\n+", i+1); /* on affecte puis on incrémente*/
        for (j=0; j<Taille; j++)
            printf ("---+");
        printf ("\n");
    }
}

int dans_plateau (int hor, int ver) {
    return ((ver >= 0) && (ver < Taille) && (hor >= 0) && (hor < Taille));
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
char adv(char j){
    if (j==N)
        return B;
    else if(j==B)
        return N;
    else
        return VIDE ;
}
int est_adversaire_adjacent(T_Othellier tab , char j , int x , int y){
    int i , x_ , y_;
    int dir[8][2] = {
    { 0 , 1} ,
    {0,-1 } ,
    {1,0 },
    {-1,0},
    {1,1},
    {-1,-1},
    {1,-1},
    {-1,1 },
    };
    for (i =0 ; i<8 ; i++){
        x_=x+dir[i][0];
        y_=y+dir[i][1];
        if(x_>0 && x_< Taille && y_>0 && y_<Taille){
            if (tab[x_][y_] == adv(j))
                return 1;
        }
    }
    return 0;
}
int peut_retourner(T_Othellier tab , char j , int x , int y){
   
    int i , x_ , y_ , cont ,compte;
    int dir[8][2] = {
    { 0 , 1} ,
    {0,-1 } ,
    {1,0 },
    {-1,0},
    {1,1},
    {-1,-1},
    {1,-1},
    {-1,1 },
    };
    for (i =0 ; i<8 ; i++){
        x_=x+dir[i][0];
        y_=y+dir[i][1];
        compte =0;
        cont=1;

        while(x_>0 && x_< Taille && y_>0 && y_<Taille && cont ){
            if (tab[x_][y_] == adv(j)){
                compte = compte +1;
                x_=x_+dir[i][0];
                y_=y_+dir[i][1];
            }
            else {
                if( tab[x_][y_]==j && compte > 0){
                    return 1;
                }
                else{
                    cont = 0;
                }
            }
        
        }
   
    }
    return 0;
}
int est_coup_valide (T_Othellier tab , char j , int x , int y){
  
    if(tab[x][y]==VIDE){
        if (est_adversaire_adjacent(tab , j , x , y)){
           return peut_retourner( tab ,  j , x , y);
        }
        else{
                return 0 ;
        }

    }
    else{
        return 0;
    }

}
int verifie_coup(T_Othellier var, char joueur) {
    int i , j ;
    for ( i = 0; i < Taille; i++) {
        for (j = 0; j < Taille; j++) {
            if (est_coup_valide(var, joueur,i,j)) {
                return 1;
            }
        }
    }
    return 1;
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

void coordonnees_coup (T_Othellier var, int *hor, int *ver, char joueur) {
    char c;
    int input_valid = 0;

    while (input_valid == 0) {
        printf ("\nC'est au tour du joueur %c de jouer\n", joueur);
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
void jouer_coup(T_Othellier tab, int x, int y, char j){
    tab[x][y]=j;
    int i , x_ , y_ , cont ,compte;
    int dir[8][2] = {
    { 0 , 1} ,
    {0,-1 } ,
    {1,0 },
    {-1,0},
    {1,1},
    {-1,-1},
    {1,-1},
    {-1,1 },
    };
    for (i =0 ; i<8 ; i++){
        x_=x+dir[i][0];
        y_=y+dir[i][1];
        compte =0;
        cont=1;

        while(x_>0 && x_< Taille && y_>0 && y_<Taille && cont ){
            if (tab[x_][y_] == adv(j)){
                compte = compte +1;
                x_=x_+dir[i][0];
                y_=y_+dir[i][1];
            }
            else {
                if( tab[x_][y_]==j && compte > 0){
                    do{
                        x_=x_-dir[i][0];
                        y_=y_-dir[i][1];
                        tab[x_][y_]=j;
                        printf("%d,%d |%d,%d\n",x_,y_,x,y);
                    }while(x_ != x || y_!= y);
                    cont=0;

                }
                else{

                    cont = 0;
                }
            }

        }

    }
}

int main() {
    T_Othellier plateau;
    int joueur = N;
    int hor, ver;

    init_Plateau(plateau);
    afficher_Plateau(plateau);

    while(partie_fini(plateau) != 1) {
        do {
            coordonnees_coup(plateau, &ver, &hor, joueur);
        } while (!est_coup_valide(plateau ,joueur , ver , hor));
        jouer_coup(plateau, ver, hor, joueur);

        joueur = adv(joueur);
        afficher_Plateau(plateau);
    }
    return 0;
}
