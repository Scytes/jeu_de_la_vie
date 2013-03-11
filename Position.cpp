#include"Position.h"
#include<iostream>

// Constructeurs

Position::Position ()
{
    abscisse = 0;
	ordonnee = 0;
}

Position::Position (unsigned int pAbscisse, unsigned int pOrdonnee) : abscisse(pAbscisse), ordonnee(pOrdonnee) {}


bool Position::operator<(const Position pos) const
{
    if(abscisse < pos.abscisse)
    {
        return true;
    }
    else if(abscisse == pos.abscisse)
    {
        if(ordonnee < pos.ordonnee)
        {
            return true;
        }
        else
            return false;
    }
    else
    {
        return false;
    }
}


unsigned int Position::getAbscisse() const
{
    return abscisse;
}

unsigned int Position::getOrdonnee() const
{
    return ordonnee;
}
