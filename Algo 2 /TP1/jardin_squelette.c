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

typedef Element Grille[NB_LIGNES][NB_COLONNES];

void init_potager(Grille grille)
{
    /* TODO */
}

void affiche_grille(Grille grille)
{
    /* TODO */
}

void sauvegarde(Grille grille)
{
    /* TODO : demander le nom du fichier puis sauvegarder la grille. */
}

int coordonnees_valides(int ligne, int colonne)
{
    /* TODO */
    return 0;
}

int case_libre(Grille grille, int ligne, int colonne)
{
    /* TODO */
    return 0;
}

void placer_carotte(Grille grille, int ligne, int colonne)
{
    /* TODO */
}

void placer_navet(Grille grille, int ligne, int colonne)
{
    /* TODO */
}

void placer_radis(Grille grille, int ligne, int colonne)
{
    /* TODO */
}

void placer_piege(Grille grille, int ligne, int colonne)
{
    /* TODO */
}

void tour_jardinier(Grille grille)
{
    /*
     * TODO : demander successivement les coordonnées des carottes, navets,
     * radis puis pièges. Vérifier les coordonnées et les cases libres.
     * Ne pas vérifier l'alignement. Afficher puis sauvegarder la grille.
     */
}

void tour_ragondin(Grille grille)
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

int tous_les_legumes_recoltes(Grille grille)
{
    /* TODO */
    return 0;
}

int partie_terminee(Grille grille)
{
    /* TODO */
    return 0;
}

int main(void)
{
    Grille grille;

    /* TODO : tester le programme complet avec tour_jardinier. */

    return 0;
}
