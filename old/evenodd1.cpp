#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
//	string name;
//	int i;
	int number; 
	cout << " enter a number " << endl;
	cin >> number ;
	for (int i=1; i<=10; i+=1)
		cout << number << " * " << i << " = " << i*number << endl;
		
}
