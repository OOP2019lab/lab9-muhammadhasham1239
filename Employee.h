#include <iostream>
#include "Address.h"
#include "Project.h"

using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee
{
	char* empname;
	int noofprojects;
	Address *A;
	Project **P;

public:
	Employee(char* name, const Address& a);
	Employee(const Employee& b);
	friend ostream& operator<<(ostream& A, const Employee& b);
	const Employee &   operator=(const Employee& b);
	void addProject(Project const *p );
	void removeProject(Project const *p ); 
	~Employee();

}; 
#endif