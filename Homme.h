//
//
//  @ Project : Jeu de la vie
//  @ File Name : Homme.h
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_HOMME_H)
#define _HOMME_H

#include "Mobile.h"
#include "Adulte.h"

using namespace std;

class Homme : public Mobile, public Adulte
{
    public:
        Homme();
        Homme(unsigned int _pv, unsigned int _age, unsigned int _esperanceDeVie, unsigned int _forceAuCombat, unsigned int _vision, unsigned int _vitesse );

        void agire();
        void tuerLapin();
};

#endif  //_HOMME_H
