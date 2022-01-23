#include <iostream>
#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Caesar.h"
#include "Caesar2.h"

	int main()
	{
		//Encryptage de Caesar
		Caesar caesar(3);
		//Codage
		caesar.Getplain(read("NonCrypte.txt"));
		std::cout << "message non crypte  : " << caesar.plain() << std::endl; //Message non crypte
		caesar.encode();
		std::cout << "message crypte  : " << caesar.cypher() << std::endl; //Message crypte
		write("Crypte.txt", caesar.cypher());
		std::cout << "" << std::endl;
		//Decodage
		std::cout << "" << std::endl;
		caesar.Getplain(read("Crypte.txt")); 
		std::cout << "message crypte  : " << caesar.cypher() << std::endl;
		caesar.decode();
		std::cout << "message non crypte  : " << caesar.plain() << std::endl;
		write("NonCrypte", caesar.plain());

		std::cout << "" << std::endl;
		
		//Encryptage de Caesar2
		Caesar2 caesar2(3);
		//Codage
		caesar2.Getplain(read("NonCrypte.txt"));
		std::cout << caesar2.plain() << std::endl; //Message non crypte
		caesar2.encode();
		std::cout << caesar2.cypher() << std::endl; //Message crypte
		write("Crypte.txt", caesar2.cypher());
		std::cout << "" << std::endl;
		//Decodage
		caesar2.Getplain(read("Crypte.txt"));
		std::cout << caesar2.cypher() << std::endl;
		caesar2.decode();
		std::cout << caesar2.plain() << std::endl;
		write("NonCrypte", caesar2.plain());
		

		return 0;
	}
