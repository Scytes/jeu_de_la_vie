#include <iostream>
#include <time.h>
#include "Monde.h"

using namespace std;

int main()
{
    // Test du générateur de positions aléatoires

    // On réinitialise le générateur de nombre aléatoire
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
