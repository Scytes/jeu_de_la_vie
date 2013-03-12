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

using namespace std;

class Femme : public Mobile, public adulte
{
    public:
        Femme();
        Femme(unsigned int _pv, unsigned int _age, unsigned int _esperanceDeVie, unsigned int _forceAuCombat, unsigned int _vision, unsigned int _vitesse);
};

#endif  //_FEMME_H
