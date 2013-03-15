#ifndef MONDE_H
#define MONDE_H

#include <map>
#include <iostream>
#include "constantes.h"
#include "Element.h"
#include <vector>

using namespace std ;

class Monde : public vector<Element *>
{
    private :
        // Attributs
        map<Position, unsigned int> worldmap ; // unsigned int = indice du vector --> permet de faire le lien entre le vector d'Element et le Monde


    public :
        // Constructeurs
        Monde() ;
        // Modificateurs
        //void addElement(Element *, const Position) ;
};

#endif
