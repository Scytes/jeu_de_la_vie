#ifndef POSITION_H
#define POSITION_H

using namespace std;

class Position
{
    private :
		unsigned int abscisse; // Variable des abscisses
		unsigned int ordonnee; // Variable des ordonnées

	public :

        // Constructeurs
        Position();
        Position(unsigned int, unsigned int);

        // Getters
        unsigned int getAbscisse() const;
        unsigned int getOrdonnee() const;
};

#endif
