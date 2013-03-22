//
//
//  @ Project : Jeu de la vie
//  @ File Name : Lapin.cpp
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//

#include "constantes.h"
#include "Lapin.h"

Lapin::Lapin(Monde * _world, const string & _nom, const Position & _pos) : Element(_world, _nom, _pos), Ressource(VAL_LAPIN_RESSOURCE), Mobile(LAPIN_VITESSE){}

//void Lapin::mordre(MembreDuPeuple _MembreDP)
//{
//    _MembreDP.setPV(_MembreDP.getPV() - LAPIN_DEGATS);
//}

void Lapin::sauter()
{
    Position newPos, oldPos = getPosition() ;
    int nbDep = getVitesse() ;

    while (nbDep > 0)
    {
        // On génère une position adjacente
        newPos = seDeplacer() ;
        while (!getMonde()->positionLibre(newPos))
            newPos = seDeplacer() ;

        // On met à jour la position dans le monde
        setPosition(newPos) ;
        unsigned int indice = getMonde()->getMap().find(oldPos)->second ;
        getMonde()->getMap().erase(oldPos) ;
        getMonde()->getMap().insert(pair<Position, unsigned>(newPos, indice)) ;
    }
}
