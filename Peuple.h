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


class Peuple
{
private:
	int nbrElements;
	int qteRessources;
public:
	void Peuple();
	void getNbrElement();
	void getQteRessource();
	void setNbrElement();
	void setQteRessource();
};

#endif  //_PEUPLE_H
