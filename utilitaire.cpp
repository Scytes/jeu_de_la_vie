#include "utilitaire.h"

/**
    Retourne une Position dont l'abscisse et l'ordonn�e sont < aux valeurs pass�es en param�tre.
**/
Position randomPos (const unsigned int _maxAbs, const unsigned int _maxOrd)
{
    // On cr�e la nouvelle position
    Position newPos((int) rand()%(_maxAbs), (int) rand()%(_maxOrd)) ;
    return newPos ;
}
