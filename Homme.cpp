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


// Methode de gestion du comportement des hommes
void Homme::agire()
{
    bool lapinTrouve = false;
    bool femmeTrouve = false;
    bool rienTrouve = false;

    while(!femmeTrouve || !lapinTrouve || !rienTrouve)
    {
        // Si pour la 1er position possible il n'y à rien on test les suites.
        // Quand toutes les cases possibles sont testé on passe rienTrouver à true
    }

    if(rienTrouve)
    {
        seDeplacer(); //Si on ne trouve rien on se deplace normalement
    }
}

void Homme::tuerLapin(Lapin _lap)
{
    /*peuple*/.addRessource(_lap.getQteRess()); //Ajout de la reesource au stock du peuple

    // On retire l'element lapin avec la methode prevu à cette effet
}
