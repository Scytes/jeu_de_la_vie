#include "Monde.h"

// Constructeurs

Monde::Monde()
{
    Position pos (1,3);
	map<Position, unsigned>:: iterator it;
//	if(find(pos)== it.end())

	Element * elt = new Element(this, "toto", pos);
	push_back(elt);		// Monde herite de vecteur
	worldmap.insert(pair<Position,unsigned>(pos,size()-1));
}

/*
void Monde::addElement(Element * _elt, const Position _posEl)
{
	push_back(_elt) ;
	worldmap[_posEl] = this->size()-1 ;
	cout<<"Element "<<_elt.getNom()<<" ajouté !" ;
}
*/
