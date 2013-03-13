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

// Methode de gestion du comportement des hommes
void Femme::agire()
{
    bool buissonTrouve = false;
    bool rienTrouve = false;

    while(!buissonTrouve || !rienTrouve)
    {
        // Si pour la 1er position possible il n'y à rien on test les suites.
        // Quand toutes les cases possibles sont testé on passe rienTrouver à true
    }

    if(rienTrouve)
    {
        seDeplacer(); //Si on ne trouve rien on se deplace normalement
    }
}

void Femme::recolterBuisson(Buisson _bui)
{
    /*peuple*/.addRessource(_bui.getQteRess()); //Ajout de la reesource au stock du peuple

    // On retire l'element lapin avec la methode prevu à cette effet
}
