//
//
//  @ Project : Jeu de la vie
//  @ File Name : Ressource.h
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_RESSOURCE_H)
#define _RESSOURCE_H

#include "Element.h"

class Ressource : public Element
{
    private:
        int qteDeRessource;
    public:
        Ressource();
};

#endif  //_RESSOURCE_H
