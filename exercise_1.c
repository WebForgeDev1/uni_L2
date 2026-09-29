#include <stdio.h>
#include <stdlib.h>
typedef struct elem{

    int val;
    struct elem *pred;
    struct elem *succ;
}t_elem;


t_elem *tete;
t_elem *queue;

void init_deque(){
    tete = NULL;
    queue = NULL;
}

int deque_vide(){

    return tete == NULL;

}
                    
void ajout_tete(int *val){

    t_elem *n;

    n = malloc(sizeof(t_elem));

    n->val = *val;
    n->succ = tete;
    n->pred = NULL;

    if(deque_vide()){
        queue = n;
    }

    else {
        tete->pred = n;
    }

    tete = n;

}

void oter_tete(int *val){

    t_elem *n;

    if(deque_vide()){
        return;
    }

    n = tete;

    *val = tete->val;

    tete = tete->succ;

    if(tete == NULL){
        queue = NULL;
    }

    else {
        tete->pred = NULL;
    }


    free(n);

}


void ajoute_queue(int val){

    t_elem *a;

    a = malloc(sizeof(t_elem));

    a->val = val;
    a->succ = NULL;
    a->pred = queue;

    if(deque_vide()){
        tete = a;
    }

    queue = a;

}

void other_queue(int *val){
    t_elem *s;


    else{
        queue->succ = a;
    }


    queue = a;

}

void other_queue(int *val){
    t_elem *s;

    if(deque_vide()){
        return;
    }

    s = queue;

    *val = s->val;

    queue = queue->pred;

    if(queue == NULL){
        tete = NULL;
    }

    else{


        queue->succ = NULL;

    }

    free(s);
    
}



    
  

    init_deque();

    int a = 5;
    int b = 48;
    int c = 12; 
    int d = 4;

    ajout_tete(&a);
    ajout_tete(&b);
    ajout_tete(&c);
    ajout_tete(&d);

    return 0;


}