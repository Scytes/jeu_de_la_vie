//
//
//  @ Project : Jeu de la vie
//  @ File Name : Peuple.h
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_PEUPLE_H)
#define _PEUPLE_H

using namespace std;

class Peuple
{
    private:
        unsigned int nbrElements;
        unsigned int qteRessources;
    public:
        Peuple();

        void addElement(_NbElem);
        void addRessource(_QteRess);

        // Getters
        unsigned int getNbrElement();
        unsigned int getQteRessource();

        //Setters
        void setNbrElement(_NbElem);
        void setQteRessource(_QteRess);

};

#endif  //_PEUPLE_H
