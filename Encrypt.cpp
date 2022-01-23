#include "Encrypt.h"



Encrypt::Encrypt()
{


}

std::string Encrypt::plain() const
{
	return _plain;
}

std::string Encrypt::cypher() const
{
	return _cypher;
}

void Encrypt::Getplain(std::string plain)
{
	_plain = plain;
}

void Encrypt::Getcypher(std::string cypher)
{
	_cypher = cypher;
}

/*void Encrypt::encode()
{
	_cypher = _plain;
}

void Encrypt::decode()
{
	_plain = _cypher;
}
*/


std::string read(std::string Adresse_Texte)
{
	std::ifstream Fichier(Adresse_Texte);
	std::string Texte((std::istreambuf_iterator<char>(Fichier)),
		(std::istreambuf_iterator<char>()));
	if (!Fichier)
	{
		std::cout << "Erreur: Fichier introuvable" << std::endl;
	}
	return Texte;
}

void write(std::string Adresse_Texte, std::string Texte)
{
	std::ofstream Fichier(Adresse_Texte);
	if (Fichier)
		Fichier << Texte;
	else
		std::cout << "Erreur: Fichier introuvable" << std::endl;
}