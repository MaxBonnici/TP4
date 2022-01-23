#pragma once
#include "Encrypt.h"



class Caesar2 : public Encrypt
{
public:
	Caesar2(int cle_chiffrage);
	void encode();
	void decode();


protected:
	int _cle;

};