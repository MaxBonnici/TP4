#pragma once
#include "Encrypt.h"


 
class Caesar : public Encrypt
{
	public :
		Caesar(int cle_chiffrage);
		void encode();
		void decode();


	protected: 
		int _cle;

};