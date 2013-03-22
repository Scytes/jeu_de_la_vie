#ifndef MONDE_H
#define MONDE_H

#include <map>
#include <iostream>
#include <vector>
#include <typeinfo>
#include <stdlib.h>
#include "constantes.h"
#include "Element.h"
#include "Position.h"
#include "Lapin.h"

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
        void addElementAtPosition(Element *, const Position) ;
        void addElement(Element *) ;
        // Affichage
        void afficher() const ;
        // Getters
        const map<Position, unsigned int> & getMap() const ;
        map<Position, unsigned int> & getMap() ;
        // Autres
        bool positionLibre (Position) ;
};

#endif
