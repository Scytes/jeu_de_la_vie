//
//
//  @ Project : Jeu de la vie
//  @ File Name : Enfant.cpp
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#include "constantes.h"
#include "Enfant.h"

Enfant::Enfant() MembreDuPeuple(VAL_PV_ENFANT, VAL_AGE_ENFANT, VAL_ESPERANCEDEVIE_ENFANT, VAL_FORCEAUCOMBAT_ENFANT, VAL_VISION_ENFANT),Mobile(ENFANT_VITESSE){}

Enfant::Enfant(unsigned int _pv, unsigned int _age, unsigned int _esperanceDeVie, unsigned int _forceAuCombat, unsigned int _vision, unsigned int _vitesse) : Adulte(_pv, _age, _esperanceDeVie, _forceAuCombat, _vision),Mobile(_vitesse){}
