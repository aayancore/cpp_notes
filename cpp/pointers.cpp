#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main(){

	int i=10;
	int j = 20;
	int *ptr = &i;
	cout << "i= " << i << endl;
	cout << "i address= " << &i << endl;

	cout << "ptr = " << ptr << endl;
	cout << "value at ptr address = " << *ptr << endl;
	*ptr = 100;
	cout << "value at ptr address = " << *ptr << endl;
	cout << "i= " << i << endl;
	
	ptr = &j;
	cout << "value at ptr address " << *ptr << endl;
	return 0;
}

	
