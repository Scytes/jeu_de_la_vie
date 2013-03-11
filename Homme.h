//
//
//  @ Project : Jeu de la vie
//  @ File Name : Homme.h
//  @ Date : 11/03/2013
//  @ Author : Xavier chalut
//
//


#if !defined(_HOMME_H)
#define _HOMME_H

#include "Mobile.h"
#include "MembreDuPeuple.h"

class Homme : public Mobile, public MembreDuPeuple
{
public:
	void Homme();
};

#endif  //_HOMME_H
