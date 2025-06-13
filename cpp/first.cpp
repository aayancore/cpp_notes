#include <cstdlib>
#include <iostream>
using namespace std;

int main(void)
{
	int marks;
	cout << "enter your marks " << endl;
	cin >> marks;
//	if (marks >= 90)
//		cout << "A grade";
//	if (marks < 90 && marks >= 80)
//		cout << "B grade";
//	if (marks < 80 && marks >= 70)
//		cout << "C grade";
//	if (marks < 70)
//		cout << "fail";
//		
//	if (marks >= 90)
//		cout << "A grade";
//	else	
//		if (marks >= 80)
//			cout << "B grade";
//		else 
//			if ( marks >= 70)
//				cout << "C grade";
//			else
//				cout << "fail";
//				
	if (marks < 70)
		cout << "fail";
	else	
		if (marks < 80)
			cout << "c grade";
		else 
			if ( marks < 90)
				cout << "B grade";
			else
				cout << "A grade";
//	cout << "square of " << x << " = " << x*x; 
//	if (x % 2 == 0 && x % 3 == 0)
//		cout << "number is divisible by 2 and 3";
//	else
//		if (x % 2 == 0)
//			cout << "number is divisible by 2";
//		else
//			if (x % 3 == 0)
//				cout << "number is divisible by 3";
//			else
//				cout <<"number is not divisible by 2 or 3";
//	return 0;
}
     
