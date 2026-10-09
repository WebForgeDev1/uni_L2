#include <stdio.h>
#include <stdlib.h>

#define TMAX 500

typedef struct element 
{
    int valeur;
    struct elem *pred;
    struct elem *succ;
}t_elem;

t_elem *drap;
t_elem *ec;


void init_list(void){
    drap = malloc(sizeof(t_elem));

    drap->pred = drap;
    drap->succ = drap;
    ec = drap;
}

int list_vide(){
    return (drap->succ == drap);
}

int hors_list(void){
    return (ec == drap);
}

void en_tet(){
    if(!list_vide()){
        ec = drap->succ;
    }
}

void en_queue(){
    if(!list_vide()){
        ec = drap->pred;
    }
}

void precedents(){
    if(!hors_list()){
        ec = ec->pred;
    }
}

void suivant(){
    if(!hors_list()){
        ec =ec->succ;
    }
}


void valeur_elt(int *val){
    if(!hors_list()){
        *val = ec->valeur;

    }
}

void oter_elt(void) {
    if (!hors_list()) {
        t_elem *tmp = ec;

        t_elem *avant = ec->pred;
        t_elem *apres = ec->succ;

        // Relier les voisins
        avant->succ = apres;
        apres->pred = avant;

        // Déplacer ec
        ec = avant;

        // Libérer l'élément supprimé
        free(tmp);
    }
}


void modif_elt(int val) {
    if (!hors_list()) {
        ec->valeur = val;
    }
}

void suivant(){
    if(!hors_list()){
        ec = ec->succ;
    }
}


void afficher(void){
    int elem;

    if(list_vide()){
        printf("list est vide \n");
        return;
    }

    en_tet();

    while(!hors_list()){
        valeur_elt(&elem);
        printf("%d : \n");
        suivant();
    }
}


int compter(int entier){
    int elem;
    int occu = 0;

     if(list_vide()){
        printf("list est vide \n");
        return 0;
    }

    en_tet();

    while(!hors_list()){
        valeur_elt(&elem);
        if(elem == entier){
            occu++;
        }
        suivant;
    }
    return occu;
}

void elever_carre(){

    
}