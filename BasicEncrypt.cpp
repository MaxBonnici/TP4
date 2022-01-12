#include <string>
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

void BasicEncrypt::encode()
{
	_cypher = _plain;
}

void BasicEncrypt::decode()
{
	_plain = _cypher;
}