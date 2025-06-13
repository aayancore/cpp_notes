#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

void demoFunction() {
	cout << "hello ! i'm in function " << endl;
}
bool isEven(int num){
	if (num % 2== 0 )
		return true;
	else
		return false;
}
bool isPrime(int num){
	bool isPrime = true;
	for (int i=2; i<num; i++)
		if (num % i ==0)
		{
			isPrime = false;
			break;
		}
	
	return isPrime;
}
void primeFactors(int num){
	int i=2;
	while (num >1){

		while (num %i ==0)
		{
			cout << i << " ,";
			num = num / i;			
		}	
		i++;
	}
}
int square(int num){
	return num * num;
}
int cube(int num){
	return num * num * num;
}
double circleSquare(double radius){
	double area = 3.14 * radius * radius;
	return area;
}
int main(){
	bool numberIsEven;
	int n;
	double r;
	cout << "enter radius to find squre of circle "<< endl;
	cin >> r;
	//int k = square(n)
	cout << circleSquare(r);
	return 0;
	cout << "enter number to find squre "<< endl;
	cin >> n;
	//int k = square(n)
	cout << square(n);
	cout << "enter number to find prime factors "<< endl;
	cin >> n;
	primeFactors(n);
	cout << "\nPlease enter a value to check even/odd " << endl;
	cin >> n;
//	demoFunction();	
//	cout <<"i'm back in main function "<< endl;
//	numberIsEven = isEven(5);
//	if (numberIsEven == true)
//	if (numberIsEven)
//	if (isEven(5)==true)
	if (isEven(n))
		cout << "number is Even";
	else
		cout << "number is odd";
		
	cout << "Please enter a value to check prime/composite " << endl;
	cin >> n;
	if (isPrime(n))
		cout << "number is Prime";
	else
		cout << "number is Composite";
		
}

//10, 11, 12, 6,7,8, 13, 14
