#include <stdio.h>

/*
-> A
Exercise 1 ecrire une programme qui lit le contenue de ficheier nombre.txt entier 
Positive et affiche les nombres entier pairs presents dans le fichier


int main(){
    
    int entier;

    FILE *f;

    f = fopen("numbers.txt", "r");

    if(f == NULL){
        printf("fichier est pas accesible ou existe pas !\n");
        return 1;
    }

    printf("les numbers positive est paires sont : ");


    while(fscanf(f, "%d ", &entier) != EOF){
            if(entier > 0 && entier % 2 == 0){
                printf("%d ", entier);
            }
        }

    printf("\n");
    fclose(f);

    return 0;

}

*/



/*
-> B
demander de utilisatuer de saisier nom de fichers pour traiter si fichier existe pas ecrire une message de erreur 

int main(){
    char nom_fichier[100];
    FILE *f;

    printf("ecrire le nom de fichier pour traiter : \n");
    scanf("%s",nom_fichier);

    f = fopen(nom_fichier, "r");

    if(f == NULL){
        printf("le fichier exsite pas dans votre folder ! \n");
        return 1;
    }

    fclose(f);
    return 0;

}
*/


/*
-> C 
demande de utilisateur nombre, verify c'est bien strictement positive et
cree une fichier div.txt content la liste des diverseur de ce nombres

int main(){
   
    int dmd_user;
    int diversuer;
     FILE *f;

    printf("ecrire une nombre pour que je trouve les divs pour cette nombre : ");
    scanf("%d",&dmd_user);

    if(dmd_user > 0){
        f = fopen("divs.txt", "w");

        if(f == NULL) {   //  Vérifier si fopen a réussi
            printf("Erreur: impossible de créer le fichier\n");
            return 1;
        }

        for(diversuer = 1; diversuer <= dmd_user; diversuer++){
            if(dmd_user % diversuer == 0){
            fprintf(f, "%d ", diversuer);
        }
    }

    printf("\nles diviseur de cette nombre est deja trouve !");
    fclose(f);

}

    else {
        printf("les divisuer pour cette nombre exsite pas ! soit untrouveable ");
    }


    return 0;
}
*/


/*
-> EXERCISE 2 : A
ecrire une fonction qui compte nombre total de carecteurs, et les nombre des lignes du fichier recu dans 
parametre les nombre de lignes corsepend les repetation de '\n'

void compter(FILE *f_entree, int* nb_car, int* nb_lignes){
    
    char carec; 

    while(fscanf(f_entree, "%c", &carec) != EOF){
        (*nb_car)++;

        if(carec == '\n'){
            (*nb_lignes)++;
        }
    }
}


int main(){

    int lines = 0;
    int car = 0;    
    FILE *f;

    f = fopen("numbers.txt", "r");

    if(f == NULL){
        printf("erreur en cas de ouverture");
        return 1;
    }

    compter(f, &lines, &car);

    printf("nombre de lignes sont %d et nombre de carecteures sont %d",car,lines);

    fclose(f);
    return 0;

}
*/


/*
EXERCISE 3 -> A
en ouvre les ficher en mode "a" (si fichier existe dans cette cas il va la ouvre et commence de ecrire a la fin si non 
il va la cree), A:- demande de utilisatuer de ecrire un nom de fichier, un entier et ajoute cet entier en fin de ficheir en ecriteur 
si fichier exsite pas !

int main(){
    
    char nom_fich[100];
    int entier;

    printf("ecrire nom de ficheir et ecrire nombre de entier ");
    scanf("%s",nom_fich);
    scanf("%d",&entier);

    FILE *f;

    f = fopen(nom_fich, "a");

    if(f == NULL){
        printf("erreur en cas de ouverture !");
        return 1;
    }

    fprintf(f, "%d", entier);
    

    fclose(f);

    return 0;
}
*/


int main(){
    FILE *f;
    char nom_f[100];
    int entier;
    int res = 0;

    printf("ecrire les nom de file : ");
    scanf("%s",nom_f);

    f = fopen(nom_f, "r");

if(f == NULL) {                    
    printf("Fichier introuvable\n");
    return 1;
}

    while (fscanf(f, "%d", &entier) == 1){
        res = res + entier;
    }
    printf("%d ",res);
    fclose(f);

    f = fopen(nom_f, "a");

    fprintf(f, "\n %d", res);

    fclose(f);

    return 0;

}