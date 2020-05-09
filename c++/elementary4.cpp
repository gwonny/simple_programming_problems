//Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
//5min35.29sec

#include <iostream>
using namespace std;

int main(void)
{
	string num_s;
	int num;
	int sum;
	
	cout << "Give me a number" << endl;
	cin >> num_s;
	num = stoi(num_s);
	
	sum = 0;
	for(int i = 0; i <= num; i++)
	{
		sum += i;
	}
	
	cout << "The sum of the numbers from 1 to " << num_s << " is " << sum << endl;
	
	return 0;
}