#ifndef POSITION_H
#define POSITION_H

#include <stdlib.h>
#include <iostream>

using namespace std;

class Position
{
    private :
		unsigned int abscisse; // Variable des abscisses
		unsigned int ordonnee; // Variable des ordonn�es
	public :

        // Constructeurs
        Position();
        Position(unsigned int, unsigned int);

        // Op�rateur
        bool operator < ( const Position &) const ;

        // Getters
        unsigned int getAbscisse() const ;
        unsigned int getOrdonnee() const ;

        // G�n�rateur
        Position randomPos (const unsigned int, const unsigned int, const unsigned int, const unsigned int) ;
};

#endif

