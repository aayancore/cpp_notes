#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int number;
	cout << " enter a number to check wheter its composite or prime " << endl;
	cin >> number;
	bool isComposite = false;
	for (int i=2; i<=number-1; i++)
		if (number % i == 0) {
			isComposite = true;
			break;
		}
	if (isComposite == true)
		cout << " number is composite " << endl;
	else
		cout << " number is prime " << endl;
			
		

	















}
	
