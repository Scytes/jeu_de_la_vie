#ifndef ELEMENT_H
#define ELEMENT_H

#include "Position.h"
#include <string>

using namespace std ;

class Monde ;

class Element
{
    private :
        Monde * worldE ;
        Position posE ;
        string nomE ;

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
        void setNom (const string) ;
};


#endif // ELEMENT_H
