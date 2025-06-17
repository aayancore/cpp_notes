#include <iostream>
#include <string>
using namespace std;

int sumFunc(int n){

	if (n==1) 
		return 1;
	else
		return (n + sumFunc(n-1));

}
int Factorial(int n){

	if (n==1) 
		return 1;
	else
		return (n * Factorial(n-1));

}
int main(){

	cout << "sum of numbers from 1 to 10 =" << sumFunc(10) << endl;
	cout << "factorial of 5 =" << Factorial(5);
		
}

	
