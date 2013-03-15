#include "Monde.h"

// Constructeurs

Monde::Monde()
{
//    do
//    {
        Position pos = randomPos(MIN_ABSCISSE, MAX_ABSCISSE, MIN_ORDONNEE, MAX_ORDONNEE) ;
//    } while (!positionLibre(pos)) ;

	map<Position, unsigned>:: iterator it ;
//	if(find(pos)== it.end())

	Element * elt = new Element(this, "toto", pos) ;
	push_back(elt) ; // Monde hérite de vecteur
	worldmap.insert(pair<Position,unsigned>(pos,size()-1)) ;
}

/*
void Monde::addElement(Element * _elt, const Position _posEl)
{
	push_back(_elt) ;
	worldmap[_posEl] = this->size()-1 ;
	cout<<"Element "<<_elt.getNom()<<" ajouté !" ;
}
*/

// Affichage

void Monde::afficher() const
{
    cout<<"Vector : "<<endl ;
    for (unsigned int i = 0 ; i < size() ; i++)
        at(i)->afficher() ;

    cout<<"Map : "<<endl ;
    map<Position, unsigned int>::const_iterator Iter ;
    for(Iter = getMap().begin() ; Iter != getMap().end() ; Iter++)
        cout<<Iter->first.getAbscisse()<<Iter->first.getOrdonnee()<<" "<<Iter->second.getAbscisse()<<Iter->second.getOrdonnee()<<endl ;
}


// Getters

map<Position, unsigned int> Monde::getMap() const
{
    return worldmap ;
}
