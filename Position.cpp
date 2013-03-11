#include "Position.h"
#include <iostream>

// Constructeurs

Position::Position ()
{
    abscisse = 0;
	ordonnee = 0;
}

Position::Position (unsigned int pAbscisse, unsigned int pOrdonnee) : abscisse(pAbscisse), ordonnee(pOrdonnee) {}


bool Position::operator< (const Position &pos) const
{
    return (abscisse < pos.abscisse || (abscisse == pos.abscisse && ordonnee < pos.ordonnee));
}


unsigned int Position::getAbscisse() const
{
    return abscisse;
}

unsigned int Position::getOrdonnee() const
{
    return ordonnee;
}
