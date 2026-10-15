#include <stdio.h>

#define NB_LIGNES 5
#define NB_COLONNES 5
#define TAILLE_NOM_FICHIER 100

typedef enum {
    VIDE,
    CAROTTE,
    NAVET,
    RADIS,
    PIEGE
} Element;

void init_potager(Element grille[NB_LIGNES][NB_COLONNES])
{
    /* TODO */
}

void affiche_grille(Element grille[NB_LIGNES][NB_COLONNES])
{
    /* TODO */
}

void sauvegarde(Element grille[NB_LIGNES][NB_COLONNES])
{
    /* TODO : demander le nom du fichier puis sauvegarder la grille. */
}

int coordonnees_valides(int ligne, int colonne)
{
    /* TODO */
    return 0;
}

int case_libre(Element grille[NB_LIGNES][NB_COLONNES], int ligne, int colonne)
{
    /* TODO */
    return 0;
}

void placer_carotte(Element grille[NB_LIGNES][NB_COLONNES], int ligne, int colonne)
{
    /* TODO */
}

void placer_navet(Element grille[NB_LIGNES][NB_COLONNES], int ligne, int colonne)
{
    /* TODO */
}

void placer_radis(Element grille[NB_LIGNES][NB_COLONNES], int ligne, int colonne)
{
    /* TODO */
}

void placer_piege(Element grille[NB_LIGNES][NB_COLONNES], int ligne, int colonne)
{
    /* TODO */
}

void tour_jardinier(Element grille[NB_LIGNES][NB_COLONNES])
{
    /*
     * TODO : demander successivement les coordonnées des carottes, navets,
     * radis puis pièges. Vérifier les coordonnées et les cases libres.
     * Ne pas vérifier l'alignement. Afficher puis sauvegarder la grille.
     */
}

void tour_ragondin(Element grille[NB_LIGNES][NB_COLONNES])
{
    /* TODO : demander les coordonnées choisies par le ragondin. */
}

void message_parcelle_vide(void)
{
    /* TODO : afficher « La parcelle est vide ». */
}

void message_legume(Element element)
{
    /* TODO : afficher le légume récolté. */
}

void message_dernier_legume(Element element)
{
    /* TODO : préciser que la récolte de cette catégorie est terminée. */
}

void message_piege(void)
{
    /* TODO : afficher le message de victoire du jardinier. */
}

int tous_les_legumes_recoltes(Element grille[NB_LIGNES][NB_COLONNES])
{
    /* TODO */
    return 0;
}

int partie_terminee(Element grille[NB_LIGNES][NB_COLONNES])
{
    /* TODO */
    return 0;
}

int main(void)
{
    Element grille[NB_LIGNES][NB_COLONNES];

    init_potager(grille);
    affiche_grille(grille);

    return 0;
}
