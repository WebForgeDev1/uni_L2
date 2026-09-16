// L2 info - TP 1 - Base de donnees sur des personnages

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#define N 50



// Definition du type categorie

typedef enum {elfe, dragon, nain, titan} t_categ;



// Definition du type position (ligne, colonne)

typedef struct {int x, y; } t_posit;



// Definition du type personnagee (nom, categorie, coordonnnees, points de vie)

typedef struct {char nom[20] ; t_categ categ ; t_posit posit ; int pdv;} t_pers ;



 


/*
    afficher tout contenu de la base c'est dire (nom, catégorie, les coordonnées et les points x,y)
    (%-20s et %-7s pour que si utilisateur ecrire moins que 20 letttres aussi ou avec space le programe crash pas 
    et une switch parceque si dans enum est egale une de cette elements dans cette cas en affiche le nom
*/

void afficher_base(t_pers* pers, int nb_pers){

 int i = 0;



 for(i = 0; i < nb_pers; i++){
 printf("%-20s : ", pers[i].nom);



 switch(pers[i].categ){

 case elfe: printf("elfe"); break;
 case dragon: printf("dragon"); break;
 case nain: printf("nain"); break;
 case titan: printf("titan"); break;
 default: printf("categorie inconnue"); break;
 }

 printf(" : %2d,%2d : %3d pdv\n", pers[i].posit.x, pers[i].posit.y, pers[i].pdv);

 } 

}


/*
    pour afficher que chaque element(entre 4 elements) et repete combien fois 
    et pour cette partie en peux faire avec 2 maniers soit avec une boucle for avec 
    incrementation ou soit avec une switch qui fait meme chose mais dans autre facon
*/

void afficher_nombre(t_pers* pers, int nb_pers){ 

int i; 
int compteur[4] = {0, 0, 0, 0};



 for(i = 0; i < nb_pers; i++){
 compteur[pers[i].categ]++;
 }

 printf("elfe : %d\n",compteur[elfe]);
 printf("dragon : %d\n",compteur[dragon]);
 printf("nain : %d\n",compteur[nain]);
 printf("titan : %d\n",compteur[titan]);

}



// c'est 2eme version de meme question 
void afficher_nombre_v2(t_pers* pers, int nb_pers){

 int nb_elfe = 0, nb_dragon = 0, nb_nain = 0, nb_titan = 0;
 int i;
 for(i = 0; i < nb_pers; i++){

 switch (pers[i].categ)
 {

 case elfe: nb_elfe++; break;
 case dragon: nb_dragon++; break;
 case nain: nb_nain++; break;
 case titan: nb_titan++; break;
 default: printf("categorie inconnue"); break;
        }
    }
 printf("elfe : %d\n", nb_elfe);
 printf("dragon : %d\n", nb_dragon);
 printf("nain : %d\n", nb_nain);
 printf("titan : %d\n", nb_titan);
}




/*
    on afficher le max de pdv : pour cette question en compare chaque pdv avec indice_max 
    pour trouve le max et afficher les nom et ...
*/
void afficher_max(t_pers* pers, int nb_pers){
    
    int indice_max = 0;


    for (int i = 1; i < nb_pers; i++){
        if(pers[i].pdv > pers[indice_max].pdv){
            indice_max = i;
        }
    }
    printf("%s : %d ",pers[indice_max].nom, pers[indice_max].pdv);
}



//    Sauvegarder tout les base dans une fichier base.txt


void sauvegarder(t_pers* pers, int nb_pers){

    FILE * f;
    f = fopen("base.txt", "w");

    if(f == NULL){
        printf("problem dans ouvirture de fichier base.txt !\n");
        return ; 
    }

    fprintf(f, "%d \n", nb_pers);
    for(int i = 0; i < nb_pers; i++){
        fprintf(f, "%s\n",pers[i].nom);
        fprintf(f, "%d\n",pers[i].categ);
        fprintf(f, "%d %d\n",pers[i].posit.x, pers[i].posit.y);
        fprintf(f, "%d\n",pers[i].pdv);
    }
    fclose(f);
}


/*
    Charger la base depuis le ficher precedent que on la cree en passent par pointer et &
    pour acceder les address
*/
void charger(t_pers* pers, int* nb_pers){
    int temp;
    FILE * fichier;
    fichier = fopen("base.txt", "r");

    if(fichier == NULL){
        printf("problem dans le ouvirture de fichier !\n");
        return ;
    }


    fscanf(fichier, "%d", nb_pers);
    for(int i = 0; i < *nb_pers; i++){
        fscanf(fichier, "%s",pers[i].nom);
        fscanf(fichier, "%d",&temp);
        pers[i].categ = temp;
        fscanf(fichier, "%d %d",&pers[i].posit.x, &pers[i].posit.y);
        fscanf(fichier, "%d",&pers[i].pdv);
    }

    fclose(fichier);
    printf("Base chargee avec succes ! (%d personnage)\n ",*nb_pers);
}



void ajouter(t_pers* pers, int* nb_pers){ 

}



void supprimer(t_pers* pers, int* nb_pers){ 

}



// Programme principal

int main(void){

 int choix; // Choix de l'utilisateur



// Declaration de la base de donnees, 

// de taille maximale 50 et de taille utile nb_pers






 t_pers pers[N] = { { "Elwing", elfe, {15, 17}, 20} ,

 { "Drogon", dragon, {20, 4}, 5} , { "Narvi", nain, {2, 6}, 18} ,

 { "Theia", titan, {20, 11}, 8 }, { "Erestor", elfe, {12, 5}, 14},

 { "Draka", dragon, {5, 10}, 6} } ;



 int nb_pers = 6 ;



 do

 { // Affichage du menu

 printf("\nMenu :\n");

 printf(" 1 - Afficher tous les personnages\n");

 printf(" 2 - Afficher le nombre de personnages par categorie\n");

 printf(" 3 - Afficher le nom du personnage qui a le plus de points de vie\n");

 printf(" 4 - Sauvegarder la base\n");

 printf(" 5 - Charger la base depuis le fichier\n");

 printf(" 6 - Quitter\n");

 printf("Votre choix : ");

 scanf("%i",&choix);



 // Traitement du choix de l'utilisateur

 switch(choix)

 { case 1 : afficher_base(pers,nb_pers); break;

 case 2: afficher_nombre(pers,nb_pers); break;

 case 3: afficher_max(pers,nb_pers); break;

 case 4: sauvegarder(pers,nb_pers); break;

 case 5: charger(pers,&nb_pers); break;

 case 6: break;

 default: printf("Erreur: votre choix doit etre compris entre 1 et 6\n");

 }

 }

 while(choix!=6);

 printf("Au revoir !\n");

 return EXIT_SUCCESS;

}
