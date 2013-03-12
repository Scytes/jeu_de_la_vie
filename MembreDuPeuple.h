//
//
//  @ Project : Jeu de la vie
//  @ File Name : MembreDuPeuple.h
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_MEMBREDUPEUPLE_H)
#define _MEMBREDUPEUPLE_H

#include "Element.h"

class MembreDuPeuple : public Element
{
    private:
        int pv;
        int age;
        int esperanceDeVie;
        int forceAuCombat;
        int vision;
    public:
        MembreDuPeuple();
        MembreDuPeuple(int _pv, int _age, int _esperanceDeVie, int _forceAuCombat, int _vision );
        void setPV();
        void setAge();
        void setEsperanceDeVie();
};

#endif  //_MEMBREDUPEUPLE_H
