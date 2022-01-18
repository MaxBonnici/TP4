#include "Encrypt.h"
#include <iostream>
#include <fstream>
#include <string>

void Encrypt::encode()
{
	std::ifstream Fichier("NonCrypte.txt");
	std::string d = "";
	std::string a((std::istreambuf_iterator<char>(Fichier)),
		(std::istreambuf_iterator<char>()));

	if (true)
	{
		std::cout << a;
		for (int i = 0; i < a.length(); i++) {
			char b = a[i];
			if (int(b) > 96 && int(b) < 123) {
				if (int(b) - 97 + 3 < 26) {
					d = d + char(int(b) + 3);
				}
				else {
					d = d + char((int(b) - 97 + 3) % 26 + 97);
				}
			}
			else {
				d = d + char(int(b));
			}

		}
	}
	else
	{
		std::cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << std::endl;
	}
	std::ofstream Fichier2("Crypte.txt");
	Fichier2 << d;
	Fichier2.close();

}