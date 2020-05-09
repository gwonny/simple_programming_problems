//Write a program that asks the user for a number n and gives them the possibility to choose between computing the sum and computing the product of 1,...,n.
//7min23.35sec

#include <iostream>
using namespace std;

int main(void)
{
	string num_s;
	int num;
	string response;
	int result;
	
	cout << "Give me a number" << endl;
	cin >> num_s;
	num = stoi(num_s);
	
	cout << "Would you like me to compute the sum from 1 to " << num_s << " or to compute the product? Say 'sum' for sum and 'product' for product" << endl;
	cin >> response;
	
	if(response.compare("sum") == 0)
	{
		result = 0;
		for(int i = 1; i <= num; i++)
		{
			result += i;
		}
		cout << "The result of the sum from 1 to " << num_s << " is " << result << endl;
	}
	else if(response.compare("product") == 0)
	{
		result = 1;
		for(int i = 1; i <= num; i++)
		{
			result *= i;
		}
		cout << "The result of the product from 1 to " << num_s << " is " << result << endl;
	}
	
	
	return 0;
}