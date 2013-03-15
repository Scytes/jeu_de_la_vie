#include "Position.h"

// Constructeurs

Position::Position ()
{
    abscisse = 0;
	ordonnee = 0;
}

Position::Position (unsigned int pAbscisse, unsigned int pOrdonnee) : abscisse(pAbscisse), ordonnee(pOrdonnee) {}


// Opérateur

bool Position::operator< (const Position &pos) const
{
    return (abscisse < pos.abscisse || (abscisse == pos.abscisse && ordonnee < pos.ordonnee));
}


// Getters

unsigned int Position::getAbscisse() const
{
    return abscisse;
}

unsigned int Position::getOrdonnee() const
{
    return ordonnee;
}


// Générateur

/**
    Retourne une Position dont l'abscisse et l'ordonnée sont < aux valeurs passées en paramètre.
    @param _minAbs La valeur de l'abscisse minimale.
    @param _maxAbs La valeur de l'abscisse maximale.
    @param _minOrd La valeur de l'ordonnée minimale.
    @param _maxOrd La valeur de l'ordonnée maximale.
**/
Position randomPos (const unsigned int _minAbs, const unsigned int _maxAbs, const unsigned int _minOrd, const unsigned int _maxOrd)
{
    // On crée la nouvelle position
    Position newPos((int) _minAbs + rand()%(_maxAbs - _minAbs), (int) _minOrd + rand()%(_maxOrd - _minOrd)) ;
    return newPos ;
}
