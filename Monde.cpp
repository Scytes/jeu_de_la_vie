#include "Monde.h"

// Constructeurs

Monde::Monde()
{
    // On g�n�re une Position al�atoire
    Position pos = randomPos(MAX_ABSCISSE, MAX_ORDONNEE) ;
    map<Position, unsigned>::iterator it ;
}
