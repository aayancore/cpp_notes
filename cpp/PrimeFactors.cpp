#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
	int number, i;
	cout << "enter number to find prime factors " << endl;
	cin >> number;//72
	i=2;
	while (number>1)
	{	
		while (number%i==0)
		{
			number = number / i;//1
			cout << i << " , ";	
		}
		i=i+1;//4
	}
}
