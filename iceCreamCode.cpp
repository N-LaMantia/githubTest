#include <iostream>
using namespace std; 

/***********************************
Struct 



********************************/
struct Order //hm. 
{
	int numCones;
	double dPrice;
	double dTotal;

	    
};    


int main()
{
	Order o1; //order one! Puts all the variables into this one variable

	
	cout << "How many ice cream cones would you like?: " << endl;
	cin >> o1.numCones; 

	o1.dPrice = 4.29; 
	o1.dTotal = o1.numCones * o1.dPrice; 

	cout << "Please pay for " << o1.numCones << ", totaling $" << o1.dTotal << endl;





}