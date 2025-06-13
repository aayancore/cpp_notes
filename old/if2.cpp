#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int age;
	cout << "enter the age ";
	cin >> age;
	if (age >= 20)
		cout << "adult"  ;
	else
		if (age >=12)
			cout << "teenager" ;
	else
		if (age >=2)
			cout << "child";
		else 
			if (age >0)
				cout << "infant" ;
			else
				cout << "invalid age";				
	}
