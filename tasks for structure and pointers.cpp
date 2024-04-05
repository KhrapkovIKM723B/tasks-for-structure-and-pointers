// tasks for structure and pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>



struct Student


{
	int years[4];
	string surname[4];
	float average[4];
};

int main()
{
	
	Student Gorochko;
	Gorochko.years = 2003;
	Gorochko.average=75;







	Student Golyb;
	Golyb.years = 2002;
	Golyb.average = 85;





	
	Student Golovco;
	Golovco.years = 2002;
	Golovco.average = 65;





	Student Goys;
	Goys.years = 2003;
	Goys.average = 95;


}