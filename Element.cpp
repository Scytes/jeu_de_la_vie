#include "Element.h"

// Dans les propriétés du .cpp, décocher la compilation.

// Constructeur

Element::Element() {}

Element::Element (Monde * _world, const string & _nom, const Position & _pos) : worldE(_world), nomE(_nom), posE(_pos)
{

}


// Getters

Monde * Element::getMonde()
{
    return worldE ;
}

Position Element::getPosition()
{
    return posE ;
}

string Element::getNom()
{
    return nomE ;
}


// Setters

void Element::setPosition(const Position _pos)
{
    posE = _pos ;
}

void Element::setNom (const string _nom)
{
    nomE = _nom ;
}
