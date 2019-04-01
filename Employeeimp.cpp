#include <iostream>
#include "Employee.h"
using namespace std;

//overloaded constructor
Employee::Employee(char* n, const Address& a){
	empname=n;
	A=new Address(a);
	noofprojects=0;
	P=nullptr;
}

//copy constructor
Employee::Employee(const Employee& b){
	empname=b.empname;
	noofprojects=b.noofprojects;
	A=b.A;
	P=new Project*[b.noofprojects];
	for(int i=0;i<b.noofprojects;i++){
		P[i]=b.P[i];
	}
}
	
//input operator
ostream& operator<<(ostream& B, const Employee& b){
B<<"Name of employee is  "<<b.empname<<endl;
B<<"Address of employee is  "<<b.A<<endl;
B<<"No of projects are   "<<b.noofprojects<<endl;
B<<"Project/s details are:"<<endl;
for(int i=0;i<b.noofprojects;i++){
	B<<b.P[i]<<endl;
}
return B;
}

const Employee& Employee::operator=(const Employee& b){
	int a=strlen(b.empname);
	empname=new char[a];
	for(int i=0;i<a;i++){
	empname[i]=b.empname[i];
	}
	noofprojects=b.noofprojects;
	P=new Project*[noofprojects];
	for(int i=0;i<noofprojects;i++){
	P[i]=b.P[i];
	}
	A=b.A;
	return *this;
}

void Employee::addProject(Project const *p){
	bool found = false;
	found = (this->P, p, noofprojects);
	if (found){
		noofprojects = noofprojects + 1;
		Project **Ab = new Project*[noofprojects];
		for (int i = 0; i < noofprojects - 1; i++){
			Ab[i] = this->P[i];
		}
		Project a(*p);
		for (int i = 0; i < noofprojects - 1; i++){
			delete P[i];
		}
		delete P;
		*Ab[noofprojects - 1] = a;
		this->P = Ab;
		cout << "Project successfully added " << endl;
	}
	else{
		cout << "No such project found" << end;
	}
}


void Employee::removeProject(Project const *p){
	bool found = false;
	found = (this->P, p, noofprojects);
	if (found){
		Project **Ab = new Project*[noofprojects - 1];
		for (int i = 0; i <= noofprojects - 1; i++){
			Ab[i] = this->P[i];
		}
		for (int i = 0; i < noofprojects; i++){
			delete P[i];
		}
		delete P;
		this->P = Ab;
		noofprojects = noofprojects - 1;
		cout << "Project successfully removed " << endl;
	}
	else{
		cout << "No such project found" << endl;
	}
}
