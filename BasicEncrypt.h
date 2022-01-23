#pragma once
#include <string>
#include <iostream>
#include <fstream>

class BasicEncrypt
{
public:
	BasicEncrypt();
	void encode();
	void decode();
	void Getplain(std::string plain);
	void Getcypher(std::string cypher);
	std::string plain() const;
	std::string cypher() const;
protected:
	std::string _plain;
	std::string _cypher;
};
