
#include "Caesar.h"


Caesar::Caesar(int cle_chiffrage)
{
	_cle = cle_chiffrage;
}



void Caesar::encode()
{
	_cypher="";
	for (int i = 0; i < _plain.length(); i++) {
		char Lettre = _plain[i];
		if (int(Lettre) > 96 && int(Lettre) < 126) {
			_cypher = _cypher + char(((int(Lettre) - 97 + _cle+26) % 26) + 97);
		}

		else {
			_cypher = _cypher + char(int(Lettre));
		}
	}
}

void Caesar::decode()
{
	_plain ="";
	for (int i = 0; i < _cypher.length(); i++)
	{
		char Lettre = _cypher[i];
		if (int(Lettre) > 96 && int(Lettre) < 123) {

			
				_plain = _plain + char(((int(Lettre) - 97 - _cle+26) % 26) + 97);
				
		}
		else {
			_plain = _plain + char(int(Lettre));
		}
	}
}