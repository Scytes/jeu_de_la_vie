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

using namespace std;

class MembreDuPeuple : public Element
{
    private:
        unsigned int pv;
        unsigned int age;
        unsigned int esperanceDeVie;
        unsigned int forceAuCombat;
        unsigned int vision;
    public:
        MembreDuPeuple();
        MembreDuPeuple(unsigned int _pv, unsigned int _age, unsigned int _esperanceDeVie, unsigned int _forceAuCombat, unsigned int _vision );

        // Getters
        unsigned int getPV();
        unsigned int getAge();
        unsigned int getEsperanceDeVie();

       // Setters
        void setPV(unsigned int _newPV);
        void setAge(unsigned int _Age);
        void setEsperanceDeVie(unsigned int _EsperanceDeVie);
};

#endif  //_MEMBREDUPEUPLE_H
