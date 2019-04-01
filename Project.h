#include <iostream>
using namespace std;

#ifndef PROJECT_H
#define PROJECT_H
class Project
{
	char* name;
	int budget;
	int duration; //estimate duration of project in weeks

public: 
	Project(char* name, int budget, int duration);
	// an overloaded constructor
	Project(const Project& a);
	//copy constructor
	friend ostream& operator<<(ostream& osObject, const Project&);
	//overloaded insertion operator
	const Project &   operator=(const Project& other);
	//overloaded assignment operator
	void setBudget(int); 
	bool search(Project *A,Project *B,int n);
	~Project();
}; 
#endif