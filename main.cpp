#include <iostream>
#include <time.h>
#include "Monde.h"

using namespace std;

int main()
{
    // Test du g�n�rateur de positions al�atoires

    // On r�initialise le g�n�rateur de nombre al�atoire
    srand(time(NULL)) ;

    Monde md ;
    Position pos ;

    // test afficher
    md.afficher() ;

    // test addElement
    /*do
    {
        pos = Position((int) MIN_ABSCISSE + rand()%(MAX_ABSCISSE - MIN_ABSCISSE), (int) MIN_ORDONNEE + rand()%(MAX_ORDONNEE - MIN_ORDONNEE)) ;
    } while (!md.positionLibre(pos)) ;
    Element * elt = new Element(&md, "xavier", pos) ;
    md.addElement(elt, pos) ;*/

    return 0;
}
