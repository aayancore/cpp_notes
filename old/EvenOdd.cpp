#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	string name = "Mohammad";
	int number;
	cout << "Enter a number " <<endl ;
	cin >> number; // number = 5
//	if (number % 3  ==0 || number %2 ==0)
//		cout << "Number is divisible by  2 or  3 ! " << number << endl;
//	else
////	if (number % 2 ==0)
//		cout << "number is not divisible by 2 or  3 ! " << number << endl;	

	if (number % 3  ==0 && number %2 ==0) //3%2=1  && 3%3 =0
		cout << "Number is divisible by  2 AND   3 ! " << number << endl;
	else
		if (number % 2 ==0) // 4 %2 =0
			cout << "Number is divisible by 2 ! " << number << endl;
		else
		//	cout << "number is not divisible by 2 " << number << endl;
			if (number % 3== 0 )
				cout << "number is divisible by 3" << number << endl;
			else
				cout << "number is not divisible by 2 or 3 ! " << number << endl;
}
