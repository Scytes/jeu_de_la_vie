//
//
//  @ Project : Jeu de la vie
//  @ File Name : Femme.h
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_FEMME_H)
#define _FEMME_H

#include "Mobile.h"
#include "Adulte.h"

class Femme : public Mobile, public adulte
{
    public:
        Femme();
};

#endif  //_FEMME_H
