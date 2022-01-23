#include "BasicEncrypt.h"

BasicEncrypt::BasicEncrypt()
{


}

std::string BasicEncrypt::plain() const
{
	return _plain;
}

std::string BasicEncrypt::cypher() const
{
	return _cypher;
}

void BasicEncrypt::Getplain(std::string plain)
{
	_plain = plain;
}

void BasicEncrypt::Getcypher(std::string cypher)
{
	_cypher = cypher;
}

void BasicEncrypt::encode()
{
	_cypher = _plain;
}

void BasicEncrypt::decode()
{
	_plain = _cypher;
}