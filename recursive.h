#include <string>
#include <sstream>
#include <iostream>

using namespace std;



void GetLastChar(string myString, stringstream &reverse)
{
	if (myString.length() == 1)
	{
		reverse << myString.at(0);
	}
	else
	{
		reverse << myString.back();
		myString.pop_back();
		GetLastChar(myString, reverse);
	}
	

}

string Reverse(string myString)
{
	stringstream reverse;
	GetLastChar(myString, reverse);
	return reverse.str();
}