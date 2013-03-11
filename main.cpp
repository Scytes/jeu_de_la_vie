#include <iostream>
#include <time.h>
#include "utilitaire.h"
#include "Position.h"

using namespace std;

int main()
{
    // Test du g�n�rateur de positions al�atoires

    // On r�initialise le g�n�rateur de nombre al�atoire
    srand(time(NULL)) ;

    Position pos1 = randomPos(15, 7) ;
    Position pos2 = randomPos(15, 7) ;
    Position pos3 = randomPos(15, 7) ;
    cout<<"Position 1 - Abscisse : "<<pos1.getAbscisse()<<" - Ordonne : "<<pos1.getOrdonnee()<<"\n" ;
    cout<<"Position 2 - Abscisse : "<<pos2.getAbscisse()<<" - Ordonne : "<<pos2.getOrdonnee()<<"\n" ;
    cout<<"Position 3 - Abscisse : "<<pos3.getAbscisse()<<" - Ordonne : "<<pos3.getOrdonnee()<<"\n" ;
    return 0;
}
