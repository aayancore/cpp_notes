#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;
int gNumber = 1000;
void arraySort(string strNames[5]){
	gNumber = 123;
	string temp;
	strNames[0]= "Malik Qadeer";
	for (int i=0; i<4; i++)
		for (int j=i+1; j<5; j++)
		if (strNames[i] > strNames[j])
		{
			temp = strNames[i];
			strNames[i] = strNames[j];
			strNames[j] = temp;
		}	
}
void demoFunction(){
	cout << "hello ! i'm in function " << endl;
}
void plusFunction(int a, int b){
	cout << "im in int datatype paremter funcion" << endl;
	cout << a + b << endl;
}
void plusFunction(double a, double b){
	cout << "im in double datatype paremter funcion" << endl;
	cout << a + b << endl;
}
void plusFunction(string str){
	cout << "im in string datatype paremter funcion" << endl;
	cout << str << endl;
}
void demoFunctionWithParameter(string str, int &age) {
	cout << "hello ! i'm in function " << endl;
	cout << "str = "<< str <<  "   age = " <<age << endl;
	str = "String Changed in function ";
	age = 40; 
	cout << "New String ="<< str <<  "   age = " <<age << endl;
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
	int n =20;
	double r;
//	gNumber = 4343;
//	plusFunction(12, 4);
//	plusFunction("Atiqa");
//	return 0;
	//string str = "test string";
//	demoFunctionWithParameter("Atiqa", n);
//	//cout <<"Str = "<<  str << "   n = " << n;	
//	return 0;
//	string strNames[] = {"Malik", "Awais", "Momi", "Muhammad", "Tayyaba"};
//	arraySort(strNames);
//	for (int i=0; i<5; i++)
//		cout << strNames[i] << "  ";
//	return 0; 
//	cout << "enter radius to find squre of circle "<< endl;
//	cin >> r;
//	//int k = square(n)
//	cout << circleSquare(r);
//		
//	cout << "enter number to find squre "<< endl;
//	cin >> n;
//	//int k = square(n);
//	cout << square(n);
//	cout << "enter number to find prime factors "<< endl;
//	cin >> n;
//	primeFactors(n);
//	cout << "\nPlease enter a value to check even/odd " << endl;
//	cin >> n;
//	demoFunction();	
//	cout <<"i'm back in main function "<< endl;
//	numberIsEven = isEven(5);
//	if (numberIsEven == true)
//	if (numberIsEven)
//	if (isEven(5)==false)
	if (isEven(n))
		cout << "number is Even";
	else
		cout << "number is Odd";
	return 0;
	cout << "Please enter a value to check prime/composite " << endl;
	cin >> n;
	if (isPrime(n))
		cout << "number is Prime";
	else
		cout << "number is Composite";
		
}

//10, 11, 12, 6,7,8, 13, 14
