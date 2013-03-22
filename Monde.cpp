#include "Monde.h"

// Constructeurs

Monde::Monde()
{
    Position pos ;
    map<Position, unsigned>::iterator it ;

    for (int i = 0 ; i < 3 ; i++)
    {
        // On génère une position non occupée
        do
        {
            pos = Position((int) MIN_ABSCISSE + rand()%(MAX_ABSCISSE - MIN_ABSCISSE), (int) MIN_ORDONNEE + rand()%(MAX_ORDONNEE - MIN_ORDONNEE)) ;
        } while (!positionLibre(pos)) ;

        // On ajoute le nouvel élément au vector et au worldmap
        Element * elt = new Element(this, "toto", pos) ;
        push_back(elt) ; // Monde hérite de vecteur
        worldmap.insert(pair<Position, unsigned>(pos, size()-1)) ; // Les éléments sont classés dans l'oedre croissant de leur coordonnée dans le container map
    }

}


// Modificateurs

void Monde::addElementAtPosition(Element * _elt, const Position _posEl)
{
	push_back(_elt) ; // On ajoute l'élement dans le vector
	worldmap[_posEl] = this->size()-1 ; // On ajoute l'élément dans le worldmap en utilisant son indice dans le vector
	cout<<"Element "<<_elt->getNom()<<" ajoute !" ;
}

void Monde::addElement(Element * _elt)
{
    do
    {
        pos = Position((int) MIN_ABSCISSE + rand()%(MAX_ABSCISSE - MIN_ABSCISSE), (int) MIN_ORDONNEE + rand()%(MAX_ORDONNEE - MIN_ORDONNEE)) ;
    } while (!positionLibre(pos)) ;
    addElementAtPosition(_elt, pos) ;
}


// Affichage

void Monde::afficher() const
{
    cout<<"Vector : "<<endl ;
    for (unsigned int i = 0 ; i < size() ; i++)
        at(i)->afficher() ;

    cout<<"\nMap : "<<endl ;
    map<Position, unsigned>::const_iterator Iter ;
    for(Iter = getMap().begin() ; Iter != getMap().end() ; Iter++)
        cout<<"("<<Iter->first.getAbscisse()<<" ; "<<Iter->first.getOrdonnee()<<") -> "<<Iter->second<<endl ;
}


// Getters

const map<Position, unsigned int> & Monde::getMap() const
{
    return worldmap ;
}

map<Position, unsigned int> & Monde::getMap()
{
    return worldmap ;
}


// Autres

bool Monde::positionLibre(Position _pos)
{
    if (worldmap.find(_pos) == worldmap.end())
        // La position est libre
        return true ;
    else
        // La position est déjà occupée
        return false ;
}
