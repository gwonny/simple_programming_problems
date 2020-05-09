//Modify the previous program such that only multiples of three or five are considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17
//4min55.25sec

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
		if(i%3 == 0 || i%5 == 0)
		{
			sum += i;
		}
	}
	
	cout << "The sum of numbers from 1 to " << num_s << " (only including multiples of three or five) is " << sum << endl;
	
	return 0;
}