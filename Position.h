#ifndef POSITION_H
#define POSITION_H

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
        unsigned int getAbscisse() const;
        unsigned int getOrdonnee() const;

        // G�n�rateur
        /**
            Retourne une Position dont l'abscisse et l'ordonn�e sont <= aux valeurs pass�es en param�tre.
            @param _maxAbs La valeur de l'abscisse maximale.
            @param _maxOrd La valeur de l'ordonn�e maximale.
        **/
        Position randomPos (const unsigned int, const unsigned int) ;
};

#endif

