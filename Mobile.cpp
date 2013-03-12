//
//
//  @ Project : Jeu de la vie
//  @ File Name : Mobile.cpp
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#include "Mobile.h"

Mobile::Mobile()
{
    vitesseDeDeplacement = 0;
}

Mobile::Mobile(unsigned int _vdedep) : vitesseDeDeplacement(_vdedep){}

const unsigned int & Mobiles::getVitesse() const
{
    return vitesseDeDeplacement;
}

void Mobile::seDeplacer()
{
 Positions posTemp;

    nbrDeplacement = vitesseDeDeplacement;
    while(nbrDeplacement != 0)
    {
        int i = rand()%6;
        switch (i)
        {

            case 0 :
                posTemp.setPosition(getPosition().getX(), getPosition().getY()+2);
                break;
            case 1 :
                posTemp.setPosition(getPosition().getX()+1, getPosition().getY()+1);
                break;
            case 2 :
                posTemp.setPosition(getPosition().getX()+1, getPosition().getY()-1);
                break;
            case 3 :
                posTemp.setPosition(getPosition().getX(), getPosition().getY()-2);
                break;
            case 4 :
                posTemp.setPosition(getPosition().getX()-1, getPosition().getY()-1);
                break;
            case 5 :
                posTemp.setPosition(getPosition().getX()-1, getPosition().getY()+1);
                break;

            nbrDeplacement--;
        }
    }
    if(getMonde()->existe(posTemp))
        {
            this->seDeplacer();
        }
        else
        {
            setPosition(posTemp);
        }
    getMonde()->actualiserMap();
}

