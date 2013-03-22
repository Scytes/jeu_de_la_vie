//
//
//  @ Project : Jeu de la vie
//  @ File Name : Mobile.h
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_MOBILE_H)
#define _MOBILE_H

#include "Element.h"

using namespace std;

class Mobile : public virtual Element
{
    private:
        unsigned int vitesseDeDeplacement; // nombre de cases par mouvement
    public:
        Mobile();
        Mobile(unsigned int _vdedep);

        const unsigned int & getVitesse() const;
        Position seDeplacer();
};

#endif  //_MOBILE_H
