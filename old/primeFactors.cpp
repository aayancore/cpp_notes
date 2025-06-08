#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int number, divisor;
	cout << "enter number to find prime factors \n";
	cin >> number;
	
	divisor = 2;
	cout << "prime facotrs  are \n";
	
	while (number > 1){	
		while( number % divisor ==0){
			number = number / divisor ;
			cout << divisor << " ,";
		}
		divisor ++ ; // divisor = divisor + 1 --> 3
	}
}
