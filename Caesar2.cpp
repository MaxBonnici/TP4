#include "Caesar2.h"


Caesar2::Caesar2(int cle_chiffrage)
{
	_cle = cle_chiffrage;
}



void Caesar2::encode()
{
	_cypher = "";
	for (int i = 0; i < _plain.length(); i++) 
	{
		char Lettre = _plain[i];
		_cypher = _cypher + char((int(Lettre) + _cle+128) % 128);
	}
}

void Caesar2::decode()
{
	_plain = "";
	for (int i = 0; i < _cypher.length(); i++)
	{
		char Lettre = _cypher[i];
		_plain = _plain + char((int(Lettre)- _cle+128) % 128);
		
	}
}