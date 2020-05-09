//Write a program that asks the user for their name and greets them with their name.
//2min39.76sec

#include <iostream>

using namespace std;

int main(void)
{
	string name;
	
	cout << "What is your name?" << endl;
	getline(cin, name);
	cout << "Hello " << name << "!" << endl;
	
	return 0;
}