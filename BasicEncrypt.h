#include <string>
#include <iostream>

class BasicEncrypt
{
public:
	void encode();
	void decode();
	string plain();
	string cypher();
protected:
	string _plain;
	string _cypher;
};
