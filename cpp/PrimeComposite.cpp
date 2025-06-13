#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
	int n, number1, number2;	
	bool isComposite = false;

	cout << "enter first number "<<endl;
	cin >> number1 ;
	
	cout << "enter Second  number "<<endl;
	cin >> number2 ;
	
	for (n=number1; n <= number2; n++){
		isComposite = false;
		
		for ( int i=2; i<n ; i++)
			if (n % i == 0) {
				isComposite = true;
				break;
			}
								
		if (isComposite == true)	
			if (n%2==0)	//even
				cout << "number is composite and even " <<endl;
			else
				cout << "number is composite and odd "  <<endl;
		else
			cout<< "number is prime "<<endl;
		
	}
	getche();
	return 0;
}
     
