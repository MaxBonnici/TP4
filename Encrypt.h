#pragma once
#include <string>
#include <iostream>
#include <fstream>





class Encrypt
{
	public :
		Encrypt();
		virtual void encode()=0;
		virtual void decode()=0;
		void Getplain(std::string plain);
		void Getcypher(std::string cypher);
		std::string plain() const;
		std::string cypher() const;
		//std::string read(std::string Adresse_Texte);
		//void write(std::string Adresse_Texte, std::string Texte);
	protected :	
		std::string _plain="";
		std::string _cypher="";
};

std::string read(std::string Adresse_Texte);
void write(std::string Adresse_Texte, std::string Texte);
