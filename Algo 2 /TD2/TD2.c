#include <stdio.h>
#include <stdlib.h>
#define NB_CARTE 52

/*
    struct - toujours remplir tous les champs (ils coexistent)
    union - remplir un seul membre à la fois (ils s'excluent)
    enum - ce n'est même pas "un champ", c'est une valeur unique parmi un ensemble fixe
*/
/*
typedef enum {

    carreau, coeur, trefle, pique

}t_couleur;


typedef enum {
    as, DEUX, TROIS, QUATRE, CINQ, SIX, SEPT, HUIT, NEUF, DIX, valet, cavalier, dame, roi
}t_hauter;


typedef struct {
    t_couleur couleurs;
    t_hauter hauters;
}t_carte;

typedef enum {
    CLASSIC, ATOUT
}t_tagTarot;

typedef union {
    t_carte carte_classique;
    int atout;
}t_carteUnion;

typedef struct {
    t_tagTarot tag;
    t_carteUnion carte;
}t_tarot;

int main(){

    t_tarot petit;
    petit.tag = ATOUT;
    petit.carte.atout = 1;

    t_tarot cavalierPique;
    cavalierPique.tag = CLASSIC;
    cavalierPique.carte.carte_classique.couleurs = pique;
    cavalierPique.carte.carte_classique.hauters = cavalier;

}
*/


typedef enum {

    carreau, coeur, trefle, pique

}t_couleur;


typedef enum {
    DEUX, TROIS, QUATRE, CINQ, SIX, SEPT, HUIT, NEUF, DIX, valet, dame, roi, as
}t_hauter;

typedef struct {
    t_couleur couleurs;
    t_hauter hauters;
}t_carte;


void initialiser(t_carte * k){

    int i = 0;

    for(int c = carreau; c <= pique; c++){
        for(int h = DEUX; h <= as; h++){
            k[i].couleurs = (t_couleur)c;
            k[i].hauters = (t_hauter)h;
            i++;
        }
    }
}


void melanger(t_carte * k){
    
    t_carte temp;
    int j; 

    for(int i = 0; i < NB_CARTE; i++){
        j = rand() % NB_CARTE;

        temp = k[i];
        k[i] = k[j];
        k[j] = temp;
    }
}

void distribuer (t_carte * paquet, t_carte * p1, t_carte * p2, t_carte * p3, t_carte * p4){

    int i = 0;

    for(int j = 0; j < 13; j++){
        p1[j] = paquet[j];
    }

    for(int k = 13; k < 26; k++){
        p2[k] = paquet[k];
    }

    for(int l = 26; l < 39; l++){
        p1[l] = paquet[l];
    }

    for(int m = 39; m < 52; m++){
        p2[m] = paquet[m];
    }

}



int main(){

}
