//
//
//  @ Project : Jeu de la vie
//  @ File Name : Peuple.cpp
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#include "Peuple.h"

// Constructeur
Peuple::Peuple()
{
    nbrElements = 0;
    qteRessources = 0;
}

void Peuple::addElement(_NbElem)
{
    nbrElements = nbrElements + _NbElem ;
}

void Peuple::addRessource(_QteRess)
{
    qteRessources = qteRessources + _QteRess ;
}

// Getters
unsigned int Peuple::getNbrElement()
{
    return nbrElements;
}

unsigned int Peuple::getQteRessource()
{
    return qteRessources;
}

// Setters
void Peuple::setNbrElement(_NbElem)
{
    nbrElements = _NbElem;
}

void Peuple::setQteRessource(_QteRess)
{
    qteRessources = _QteRess;
}


