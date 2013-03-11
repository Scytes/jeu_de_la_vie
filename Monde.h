#ifndef MONDE_H
#define MONDE_H

#include <map>
#include <iostream>
#include "Position.h"

class Monde : public vector<Element *>
{
    private :

        // Constantes
        const unsigned int MAX_ABSCISSE = 7 ;
        const unsigned int MAX_ORDONNEE = 15 ;

        // Attributs
        map<Position, unsigned int> world ;
        // unsigned int = indice du vector --> permet de faire le lien entre le vector d'Element et le Monde


    public :

        // Constructeurs
        Monde() ;
};

#endif
