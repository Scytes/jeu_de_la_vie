#include "Monde.h"

// Constructeurs

Monde::Monde()
{
    // On génère une Position aléatoire
    Position pos = randomPos(MAX_ABSCISSE, MAX_ORDONNEE) ;
    map<Position, unsigned>::iterator it ;
}
