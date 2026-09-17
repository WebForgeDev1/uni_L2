#include <stdio.h>

/*
 * Squelette d'examen - jeu du jardin
 *
 * Les fonctions ci-dessous sont volontairement incomplètes. Completer les
 * TODO sans modifier les prototypes si l'enonce impose une interface precise.
 */

#define NB_LIGNES 5
#define NB_COLONNES 5
#define TAILLE_NOM_FICHIER 256

typedef enum {
    CASE_VIDE,
    CAROTTE,
    NAVET,
    RADIS,
    PIEGE
} TypeCase;

typedef struct {
    TypeCase cases[NB_LIGNES][NB_COLONNES];
} Jardin;

typedef struct {
    int ligne;
    int colonne;
} Coordonnees;

/* Initialisation et affichage du jardin. */
void init_potager(Jardin *jardin);
void afficher_jardin(const Jardin *jardin);

/* Sauvegarde dans un fichier dont le nom est choisi par l'utilisateur. */
int sauvegarde(const Jardin *jardin, const char *nom_fichier);
int demander_nom_fichier(char *nom_fichier, size_t taille_nom_fichier);

/* Placement des legumes et des pieges par le jardinier. */
int coordonnees_valides(Coordonnees coordonnees);
int case_vide(const Jardin *jardin, Coordonnees coordonnees);
int placer_carotte(Jardin *jardin, Coordonnees coordonnees);
int placer_navet(Jardin *jardin, Coordonnees coordonnees);
int placer_radis(Jardin *jardin, Coordonnees coordonnees);
int placer_piege(Jardin *jardin, Coordonnees coordonnees);
void tour_jardinier(Jardin *jardin);

/* Tour du lapin et messages associés à la case choisie. */
Coordonnees choisir_coordonnees_lapin(void);
void tour_lapin(Jardin *jardin);
void message_case_vide(void);
void message_legume(TypeCase legume);
void message_dernier_legume(TypeCase legume);
void message_piege(void);

/* Conditions de fin de partie. */
int reste_legumes(const Jardin *jardin);
int lapin_a_gagne(const Jardin *jardin);
int jardinier_a_gagne(const Jardin *jardin);
int partie_terminee(const Jardin *jardin);

int main(void)
{
    Jardin jardin;
    char nom_fichier[TAILLE_NOM_FICHIER];

    /*
     * TODO : remplacer l'appel a init_potager par tour_jardinier pour tester
     * cette partie de l'enonce, puis organiser les tours et afficher le gagnant.
     */
    /* TODO : tour_jardinier(&jardin); */
    (void)jardin;
    (void)nom_fichier;

    return 0;
}

void init_potager(Jardin *jardin)
{
    /* TODO : mettre toutes les cases du jardin dans l'etat CASE_VIDE. */
    (void)jardin;
}

void afficher_jardin(const Jardin *jardin)
{
    /* TODO : afficher la matrice et la signification de chaque symbole. */
    (void)jardin;
}

int sauvegarde(const Jardin *jardin, const char *nom_fichier)
{
    /* TODO : ouvrir nom_fichier et y sauvegarder le contenu du jardin. */
    (void)jardin;
    (void)nom_fichier;
    return 0;
}

int demander_nom_fichier(char *nom_fichier, size_t taille_nom_fichier)
{
    /* TODO : demander puis lire un nom de fichier choisi par l'utilisateur. */
    (void)nom_fichier;
    (void)taille_nom_fichier;
    return 0;
}

int coordonnees_valides(Coordonnees coordonnees)
{
    /* TODO : verifier que la ligne et la colonne sont dans la matrice. */
    (void)coordonnees;
    return 0;
}

int case_vide(const Jardin *jardin, Coordonnees coordonnees)
{
    /* TODO : verifier que la case est vide, apres validation des coordonnees. */
    (void)jardin;
    (void)coordonnees;
    return 0;
}

int placer_carotte(Jardin *jardin, Coordonnees coordonnees)
{
    /* TODO : valider les coordonnees et la case, puis placer une carotte. */
    (void)jardin;
    (void)coordonnees;
    return 0;
}

int placer_navet(Jardin *jardin, Coordonnees coordonnees)
{
    /* TODO : valider les coordonnees et la case, puis placer un navet. */
    (void)jardin;
    (void)coordonnees;
    return 0;
}

int placer_radis(Jardin *jardin, Coordonnees coordonnees)
{
    /* TODO : valider les coordonnees et la case, puis placer un radis. */
    (void)jardin;
    (void)coordonnees;
    return 0;
}

int placer_piege(Jardin *jardin, Coordonnees coordonnees)
{
    /* TODO : valider les coordonnees et la case, puis placer un piege. */
    (void)jardin;
    (void)coordonnees;
    return 0;
}

void tour_jardinier(Jardin *jardin)
{
    /*
     * TODO : demander successivement les couples de coordonnees des carottes,
     * navets, radis puis pieges. Verifier les coordonnees et que chaque case
     * est libre, sans verifier l'alignement. Afficher puis sauvegarder le
     * potager en reutilisant les fonctions deja ecrites.
     */
    (void)jardin;
}

Coordonnees choisir_coordonnees_lapin(void)
{
    Coordonnees coordonnees = {0, 0};

    /* TODO : demander au lapin les coordonnees de la case a visiter. */
    return coordonnees;
}

void tour_lapin(Jardin *jardin)
{
    /* TODO : jouer un tour et appeler le message correspondant a la case. */
    (void)jardin;
}

void message_case_vide(void)
{
    /* TODO : afficher le message prevu quand la case est vide. */
}

void message_legume(TypeCase legume)
{
    /* TODO : afficher le message prevu quand un legume est trouve. */
    (void)legume;
}

void message_dernier_legume(TypeCase legume)
{
    /* TODO : afficher le message prevu quand c'est le dernier legume. */
    (void)legume;
}

void message_piege(void)
{
    /* TODO : afficher le message prevu quand le lapin tombe sur un piege. */
}

int reste_legumes(const Jardin *jardin)
{
    /* TODO : determiner s'il reste au moins un legume dans le jardin. */
    (void)jardin;
    return 0;
}

int lapin_a_gagne(const Jardin *jardin)
{
    /* TODO : determiner si la condition de victoire du lapin est atteinte. */
    (void)jardin;
    return 0;
}

int jardinier_a_gagne(const Jardin *jardin)
{
    /* TODO : determiner si la condition de victoire du jardinier est atteinte. */
    (void)jardin;
    return 0;
}

int partie_terminee(const Jardin *jardin)
{
    /* TODO : combiner les conditions de fin de partie de l'enonce. */
    (void)jardin;
    return 0;
}
