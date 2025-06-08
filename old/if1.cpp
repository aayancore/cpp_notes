#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int marks, age ;
//	cout << "Enter a marks " <<endl ;
//	cin >> marks; // number = 5
	
	cout << "Enter a age " <<endl ;
	cin >> age; // number = 5

//	if (marks > 50 && age < 18)
//		cout << "good work boy !" ;
	
//	if (marks >50 and age >= 18)
//		cout << "Good Job Man !";
//
//	if (age >= 18)
//		cout << "Adult !";
//	else
//		if (age >=12)
//			cout << "Young ! ";
//		else
//			if (age >=2)
//				cout << "child !" ;
//			else
//				cout << "Infant !";

	
	if (age >= 18)
		cout << "Adult !";
		
	if (age <18 && age >=12)
		cout << "Young ! ";
	
	if (age <12 && age >=2)
		cout << "child !" ;
		
	if (age<2)			
		cout << "Infant !";
}
