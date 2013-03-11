//
//
//  @ Project : Jeu de la vie
//  @ File Name : Enfant.h
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_ENFANT_H)
#define _ENFANT_H

#include "Mobile.h"
#include "MembreDuPeuple.h"

class Enfant : public Mobile, public MembreDuPeuple
{
public:
	void Enfant();
};

#endif  //_ENFANT_H
