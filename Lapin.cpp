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

Lapin::Lapin() : Ressource(VAL_LAPIN_RESSOURCE),Mobile(LAPIN_VITESSE){}

void Morde(_MembreDP)
{
    _MembreDP.setPV(_MembreDP.getPV() - LAPIN_DEGATS);
}
