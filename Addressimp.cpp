#include <iostream>
#include "Address.h"
using namespace std;

//overloaded assignment operator
	  const Address& Address::operator=(const Address& A){
		  int a=strlen(A.housenumber);
	housenumber=new char[a];
	for(int i=0;i<a;i++){
		housenumber[i]=A.housenumber[i];
	}
	a=strlen(A.streetname);
	streetname=new char[a];
	for(int i=0;i<a;i++){
		streetname[i]=A.streetname[i];
	}
	a=strlen(A.city);
	city=new char[a];
	for(int i=0;i<a;i++){
		city[i]=A.city[i];
	}
	a=strlen(A.country);
	country=new char[a];
	for(int i=0;i<a;i++){
		country[i]=A.country[i];
	}
	return *this;
	}
	  //default constructor
	 Address::~Address(){
		 delete housenumber;
		 delete streetname;
		 delete city;
		 delete country;
	 }

//overloaded constructor
Address::Address(char* h, char* s, char * c,char* C){
	housenumber=h;
	streetname=s;
	city=c;
	country=C;
}

//copy constructor
Address::Address(const Address& A){
	housenumber=A.housenumber;
	streetname=A.streetname;
	city=A.city;
	country=A.country;
}

	 //input operator
	ostream& operator<<(ostream& A, const Address& a){
	A<<"House number is  "<<a.housenumber<<endl;
	A<<"Street name is  "<<a.streetname<<endl;
	A<<"City name is  "<<a.city<<endl;
	A<<"Country name is  "<<a.country<<endl;
	return A;
	}
