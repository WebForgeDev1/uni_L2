#include <stdio.h>

/* 
    Exercise 1 :  A
    demande de utilisateur de saisir les d’entiers positive, et fin de cette 
    demande avec -1 et cree fichier en suit stocke les d’entiers que ecrire par 
    utilisateur dans cette fichier qui va pas contien(le -1)

*/
void creer_fichier(){

    FILE * f;
    int demande;

    f = fopen("donnees.txt", "w");

    if(f == NULL){
        printf("problem en creation de fichier ! \n");
        return ;
    }

    printf("ecrire le nombre positive et pour termine clique -1 : ");

    scanf("%d",&demande);

    while(demande != -1){
        fprintf(f,"%d ", demande);
        scanf("%d",&demande);
    }

    printf("fin de ecrirre merci !\n");
        
    fclose(f);

}


/*
    EXERCISE 1 : C
    ecrire une fonction que lire le contenue de une fichier 
    et affichier cette informations sur ecran cette contenue de fiche 

*/

void afficher_fichier(){
    
    int lire_f;
    FILE * f;

    f = fopen("donnees.txt", "r");

    if(f == NULL){
        printf("problem en ouvriteur de fichier ! \n");
        return ;
    }

    while(fscanf(f, "%d", &lire_f) == 1){
        printf("%d ",lire_f);
    }

    fclose(f);

}


/*
    demande de utilisateur de nom de ficher cree une ficher a cette nom et en suit demande de utilisatuer de 
    sasiar les nombre positive et de sauvegarder le dans cette fichier 
*/

void creer_fichier_V2(){

    FILE * f;
    int demande;
    char nm_fichier[100];


    printf("ecrire ici svp le nom de fichier : \n");
    scanf("%s",nm_fichier);

    f = fopen(nm_fichier, "w");

    if(f == NULL){
        printf("problem en creation de fichier ! \n");
        return ;
    }

    printf("ecrire le nombre positive et pour termine clique -1 : ");

    scanf("%d",&demande);

    while(demande != -1){
        fprintf(f,"%d ", demande);
        scanf("%d",&demande);
    }

    printf("fin de ecrirre merci !\n");
        
    fclose(f);

}

/*
    on va afficher les contenue de fichier qui va demande de utilisetuer et notre travail 
    c'est lire cette fichier et de la affchier les contenue de cette fichier ...
*/

void afficher_fichier_V2(){
    
    char demande_fichier[100];
    int lire_f;
    FILE * f;

    printf("Quel fichier voulez-vous afficher ? : ");
    scanf("%s",demande_fichier);
    f = fopen(demande_fichier, "r");

    if(f == NULL){
        printf("problem en ouvriteur de fichier ! \n");
        return ;
    }

    while(fscanf(f, "%d", &lire_f) == 1){
        printf("%d ",lire_f);
    }

    fclose(f);

}

int main(){
    creer_fichier();
    printf("\n");
    
    afficher_fichier();
    printf("\n\n");
    
    creer_fichier_V2();
    printf("\n");
    
    afficher_fichier_V2();
    printf("\n");
    
    return 0;
}