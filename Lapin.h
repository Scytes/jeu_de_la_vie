//
//
//  @ Project : Jeu de la vie
//  @ File Name : Lapin.h
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_LAPIN_H)
#define _LAPIN_H

#include "MembreDuPeuple.h"
#include "Ressource.h"
#include "Mobile.h"

using namespace std;

class Lapin : public Ressource, public Mobile
{
    public:
        Lapin();
        void mordre( MembreDuPeuple _MembreDP);
};

#endif  //_LAPIN_H
