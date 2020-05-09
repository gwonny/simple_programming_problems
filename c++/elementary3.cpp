//Modify the previous program such that only the users Alice and Bob are greeted with their names.
//3min18.23sec

#include <iostream>
using namespace std;

int main(void)
{
	string name;
	
	cout << "What is your name?" << endl;
	getline(cin, name);
	if(name.compare("Alice") == 0 || name.compare("Alice") == 0)
	{
		cout << "Hello " << name << "!" << endl;
	}
	
	return 0;
}