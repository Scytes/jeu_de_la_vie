//
//
//  @ Project : Jeu de la vie
//  @ File Name : Enfant.h
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_ENFANT_H)
#define _ENFANT_H

#include "Mobile.h"
#include "MembreDuPeuple.h"

using namespace std;

class Enfant : public Mobile, public MembreDuPeuple
{
    public:
        Enfant();
        Enfant(unsigned int _pv, unsigned int _age, unsigned int _esperanceDeVie, unsigned int _forceAuCombat, unsigned int _vision, unsigned int _vitesse);
};

#endif  //_ENFANT_H
