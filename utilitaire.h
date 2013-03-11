#ifndef UTILITAIRE_H
#define UTILITAIRE_H

#include <stdlib.h>
#include "Position.h"

/**
    Retourne une Position dont l'abscisse et l'ordonnée sont < aux valeurs passées en paramètre.
    @param _maxAbs La valeur de l'abscisse maximale.
    @param _maxOrd La valeur de l'ordonnée maximale.
**/
Position randomPos (const unsigned int, const unsigned int) ;

#endif // UTILITAIRE_H
