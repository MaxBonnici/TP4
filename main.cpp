#include <iostream>
#include <fstream>
#include <string>
#include "BasicEncrypt.h"

	int main()
	{
		std::ifstream Fichier("test.txt");
		std::string d = "";
		if (Fichier)
		{
			std::string a = "test du tp";
			
			for (int i = 0; i < a.length(); i++) {
				char b = a[i];
				if (int(b) + 3 <= 123) {
					d = d + char(int(b) + 3); // SI ASCII = 32 laisser 32 sinon # aulieu de space
				}
				else {
					d = d + char(int(b) + 3-26);
				}
			}


		}
		else
		{
			std::cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << std::endl;
		}
		std::cout << d << std::endl;
		return 0;
	}

