//
//
//  @ Project : Jeu de la vie
//  @ File Name : Femme.cpp
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#include "constantes.h"
#include "Femme.h"

Femme::Femme() Adulte(VAL_PV_FEMME, VAL_AGE_FEMME, VAL_ESPERANCEDEVIE_FEMME, VAL_FORCEAUCOMBAT_FEMME, VAL_VISION_FEMME),Mobile(HOMME_VITESSE){}

Femme::Femme(unsigned int _pv, unsigned int _age, unsigned int _esperanceDeVie, unsigned int _forceAuCombat, unsigned int _vision ) : Adulte(_pv, _age, _esperanceDeVie, _forceAuCombat, _vision, unsigned int _vitesse),Mobile(_vitesse){}
