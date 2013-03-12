//
//
//  @ Project : Jeu de la vie
//  @ File Name : MembreDuPeuple.cpp
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#include "MembreDuPeuple.h"

MembreDuPeuple::MembreDuPeuple()
{
    pv = 0;
    age = 0;
    esperanceDeVie = 0;
    forceAuCombat = 0;
    vision = 0;
}

MembreDuPeuple::MembreDuPeuple(unsigned int _pv, unsigned int _age, unsigned int _esperanceDeVie, unsigned int _forceAuCombat, unsigned int _vision ) : pv(_pv), age(_age), esperanceDeVie(_esperanceDeVie), forceAuCombat(_forceAuCombat), vision(_vision) {}

// Getters
unsigned int getPV()
{
    return pv;
}
unsigned int getAge()
{
    return age;
}
unsigned int getEsperanceDeVie()
{
    return esperanceDeVie;
}

// Setters
void MembreDuPeuple::setPV(_newPV)
{
    pv = _newPV;
}

void MembreDuPeuple::setAge(_Age)
{
    age = _Age;
}

void MembreDuPeuple::setEsperanceDeVie(_EsperanceDeVie)
{
    esperanceDeVie = _EsperanceDeVie;
}

