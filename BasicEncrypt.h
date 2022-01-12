#include <iostream>

class BasicEncrypt
{
public:
	BasicEncrypt();
	void encode();
	void decode();
	std::string plain() const;
	std::string cypher() const;
protected:
	std::string _plain;
	std::string _cypher;
};
