#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
	int number1, number2;
	
	cout << "enter first number "<<endl;
	cin >> number1;
	cout << "enter second number "<<endl;
	cin >> number2;
/*	
	for (int n = number1; n<= number2; n++){
	
		cout<< n << endl;
		cout<< n << endl;
		cout<< n << endl;
		cout<< n << endl;
		cout<< n << endl;
		
	}
*/
	for (int n=1; n<=5; n++)
		cout << n;
	
	
	if (number1 > number2 )
		cout << "number1 is greater "<< number1;
	else
		cout << "number2 is greater "<< number2;

	return 0;
}
     
