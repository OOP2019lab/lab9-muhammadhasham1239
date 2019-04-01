#include <iostream>
#include "Project.h"
using namespace std;

	//overloaded assignment operator
const Project& Project::operator=(const Project& a){
	 int b=strlen(a.name);
	name=new char[b];
	for(int i=0;i<b;i++){
		name[i]=a.name[i];
	}
	budget=a.budget;
	duration=a.duration;
	return *this;
}

// an overloaded constructor
Project::Project(char* n, int b, int d){
	name=n;
	budget=b;
	duration=d;
}

	//copy constructor
Project::Project(const Project& a){
	name=a.name;
	budget=a.budget;
	duration=a.duration;
}

//overloaded insertion operator	
ostream& operator<<(ostream& A, const Project& a){
A<<"Project name is  "<<a.name<<endl;
A<<"Budget is "<<a.budget<<endl;
A<<"Duration is  "<<a.duration<<endl;
return A;
}

//setter of budget
void Project::setBudget(int a){
	budget=a;
}

//default constructor
	Project::~Project(){
		delete name;
		budget=-1;
		duration =-1;

	}

	bool Project::search(Project *A,Project *B,int n){
		bool a=false;
		for(int i=0;i<n;i++){
			if(A[i].budget==B[0].budget && A[i].duration==B[0].duration){
			return true;
			}else{
			a=false;
			}
		}
		if(!a){
		return false;
		}
	}