//
//
//  @ Project : Jeu de la vie
//  @ File Name : Homme.cpp
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#include "constantes.h"
#include "Homme.h"

Homme::Homme(): Adulte(VAL_PV_HOMME, VAL_AGE_HOMME, VAL_ESPERANCEDEVIE_HOMME, VAL_FORCEAUCOMBAT_HOMME, VAL_VISION_HOMME),Mobile(HOMME_VITESSE){}

Homme:: Homme(unsigned int _pv, unsigned int _age, unsigned int _esperanceDeVie, unsigned int _forceAuCombat, unsigned int _vision, unsigned int _vitesse) : Adulte(_pv, _age, _esperanceDeVie, _forceAuCombat, _vision),Mobile(_vitesse){}
