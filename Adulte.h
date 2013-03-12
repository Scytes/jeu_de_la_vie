//
//
//  @ Project : Jeu de la vie
//  @ File Name : Adulte.h
//  @ Date : 12/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_ADULTE_H)
#define _ADULTE_H

#include "MembreDuPeuple.h"

using namespace std;

class Adulte : public MembreDuPeuple
{
    public:
        Adulte(unsigned int _pv, unsigned int _age, unsigned int _esperanceDeVie, unsigned int _forceAuCombat, unsigned int _vision);
};

#endif  //_ADULTE_H
