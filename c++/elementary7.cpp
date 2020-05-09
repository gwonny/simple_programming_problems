//Write a program that prints a multiplication table for numbers up to 12.
//13min57.48sec

#include <iostream>
using namespace std;

//https://stackoverflow.com/questions/22648978/c-how-to-find-the-length-of-an-integer
int num_digits(int num)
{
	int result = 0;
	
	do
	{
		++result;
		num /= 10;
	}
	while(num);
	
	return result;
}

int main(void)
{
	int mult_table[12][12];
	
	mult_table[0][0] = 1;
	for(int i = 1; i < 12; i++)
	{
		mult_table[0][i] = i+1;
		mult_table[i][0] = i+1;
	}
	
	for(int j = 1; j < 12; j++)
	{
		for(int k = 1; k < 12; k++)
		{
			mult_table[j][k] = mult_table[0][j] * mult_table[k][0];
		}
	}
	
	//could have been improved; print a space for every 4 - num_digits(to_print)
	for(int y = 0; y < 12; y++)
	{
		for(int x = 0; x < 12; x++)
		{
			int to_print = mult_table[y][x];
			
			cout << to_print;
			if(num_digits(to_print) == 1)
			{
				cout << "   ";
			}
			else if(num_digits(to_print) == 2)
			{
				cout << "  ";
			}
			else if(num_digits(to_print) == 3)
			{
				cout << " ";
			}
			
		}
		cout << endl;
	}
	
	return 0;
}
