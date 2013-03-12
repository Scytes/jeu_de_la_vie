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

        // Opérateur
        bool operator < ( const Position &) const ;

        // Getters
        unsigned int getAbscisse() const;
        unsigned int getOrdonnee() const;

        // Générateur
        /**
            Retourne une Position dont l'abscisse et l'ordonnée sont <= aux valeurs passées en paramètre.
            @param _maxAbs La valeur de l'abscisse maximale.
            @param _maxOrd La valeur de l'ordonnée maximale.
        **/
        Position randomPos (const unsigned int, const unsigned int) ;
};

#endif

