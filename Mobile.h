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

using namespace std;

class Mobile
{
    private:
        unsigned int vitesseDeDeplacement;
    public:
        Mobile();
        Mobile(unsigned int _vdedep);

        const unsigned int & getVitesse() const;
        void seDeplacer();
};

#endif  //_MOBILE_H
