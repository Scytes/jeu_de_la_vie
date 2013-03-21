#ifndef ELEMENT_H
#define ELEMENT_H

#include "Position.h"
#include <string>
#include <iostream>


using namespace std ;

class Monde ;

class Element
{
    private :
        Monde * worldE ;
        string nomE ;
        Position posE ;

    public :
        // Constructeur
        Element() ;
        Element (Monde *, const string &, const Position &) ;
        // Getters
        Monde * getMonde() ;
        Position getPosition() ;
        string getNom() ;
        // Setters
        void setPosition(const Position) ;
        void setNom(const string) ;
        // Affichage
        void afficher() const ;
};


#endif // ELEMENT_H
