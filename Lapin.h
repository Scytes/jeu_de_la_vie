//
//
//  @ Project : Jeu de la vie
//  @ File Name : Lapin.h
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_LAPIN_H)
#define _LAPIN_H

#include "Ressource.h"
#include "Mobile.h"

class Lapin : public Ressource, public Mobile
{
public:
	void Lapin();
};

#endif  //_LAPIN_H