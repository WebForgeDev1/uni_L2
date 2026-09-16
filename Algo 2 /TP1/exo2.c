#include <stdio.h>


int main(){

    float lire_fich;
    float max = 0;
    float min = 0;
    FILE * f_entree;
    FILE * f_sortie_pos;
    FILE * f_sortie_neg;
    /*
    ouverture des 3 fichiers une en mode read et les deux autre dans
    mode write pour ecrire de dans et une operation control pour chaque 
    fichier ou cas ou si une problem en cas de ouverture de fichiers
    */
    
    f_entree = fopen("releves.txt", "r");
    if(f_entree == NULL){
        printf("problem sur ouvreture de fichier releve.txt \n");
        return 1;
    }

    f_sortie_pos = fopen("rev_pos.txt", "w");
    if(f_sortie_pos == NULL){
        printf("problem sur ouvreture de fichier rev_pos.txt \n");
        return 2;
    }

    f_sortie_neg = fopen("rev_neg.txt", "w");
    if(f_sortie_neg == NULL){
        printf("problem sur ouvreture de fichier rev_neg.txt \n");
        return 3;
    }




    /*
    lire le ficher et mettre les negative et les ppositives dans les fichiers specific
    et de trouve les min et max de cette fichier aussi 
    */
    while(fscanf(f_entree, "%f", &lire_fich) == 1){

        if(lire_fich > max){
            max = lire_fich;
        }
        else if (lire_fich < min){
            min = lire_fich;
        }
        
        if(lire_fich >= 0){
            fprintf(f_sortie_pos, "%f ", lire_fich);
        }

        else if(lire_fich < 0){
            fprintf(f_sortie_neg, "%f ", lire_fich);
        }
    }


        printf("min = %.2f et max = %.2f \n",min,max);

        fclose(f_entree);
        fclose(f_sortie_pos);
        fclose(f_sortie_neg);

        return 0;

}
