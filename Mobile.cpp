//
//
//  @ Project : Jeu de la vie
//  @ File Name : Mobile.cpp
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#include "Mobile.h"

// Constructeurs

Mobile::Mobile()
{
    vitesseDeDeplacement = 0;
}

Mobile::Mobile(unsigned int _vdedep) : vitesseDeDeplacement(_vdedep){}


// Déplacer

Position Mobile::seDeplacer()
{
    Position posTemp;

    switch (rand()%6)
    {
        case 0 :
            posTemp.setPosition(getPosition().getAbscisse(), getPosition().getOrdonnee()+2);
            break;
        case 1 :
            posTemp.setPosition(getPosition().getAbscisse()+1, getPosition().getOrdonnee()+1);
            break;
        case 2 :
            posTemp.setPosition(getPosition().getAbscisse()+1, getPosition().getOrdonnee()-1);
            break;
        case 3 :
            posTemp.setPosition(getPosition().getAbscisse(), getPosition().getOrdonnee()-2);
            break;
        case 4 :
            posTemp.setPosition(getPosition().getAbscisse()-1, getPosition().getOrdonnee()-1);
            break;
        case 5 :
            posTemp.setPosition(getPosition().getAbscisse()-1, getPosition().getOrdonnee()+1);
            break;
    }

    return posTemp ;
}


// Getters

const unsigned int & Mobile::getVitesse() const
{
    return vitesseDeDeplacement;
}
