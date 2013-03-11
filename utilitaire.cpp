#include "utilitaire.h"

/**
    Retourne une Position dont l'abscisse et l'ordonnée sont < aux valeurs passées en paramètre.
    @param _maxAbs La valeur de l'abscisse maximale.
    @param _maxOrd La valeur de l'ordonnée maximale.
**/
Position randomPos (const unsigned int _maxAbs, const unsigned int _maxOrd)
{
    // On crée la nouvelle position
    Position newPos((int) rand()%(_maxAbs), (int) rand()%(_maxOrd)) ;
    return newPos ;
}
