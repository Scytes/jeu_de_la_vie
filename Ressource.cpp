//
//
//  @ Project : Jeu de la vie
//  @ File Name : Ressource.cpp
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#include "Ressource.h"

Ressource::Ressource()
{
    qteDeRessource = 0;
}

Ressource::Ressource(unsigned int _qteRess) : qteDeRessource(_qteRess) {}

// Getters
unsigned int Ressource::getQteRess()
{
    return qteDeRessource;
}
