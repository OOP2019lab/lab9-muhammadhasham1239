//Address.h
#include <iostream>
using namespace std;


#ifndef ADDRESS_H
#define ADDRESS_H
class Address
{
	char* housenumber;
	char* streetname ;
	char * city;
	char* country;

public:
	Address(char* housenumber, char* streetname, char * city,char* county);
	Address(const Address& a);
	friend ostream& operator<<(ostream& A, const Address&);
	const Address& operator=(const Address& other);
	~Address();
};
#endif