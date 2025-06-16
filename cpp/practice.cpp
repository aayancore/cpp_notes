#include <iostream>
#include <string>
using namespace std;

int main(){
	int array[50] = {12, 4, 67, 32, 98, 56};
	int elementCount=6;
	int sum=0;
	int product=1;
	int pos;
	
	for(int i=elementCount-1; i>=0; i--)
		array[i+1] = array[i];
	
	elementCount ++;
	
	cout << "add element at the beginning of the array " << endl;
	cin >> array[0];
	
	
	for(int i=0; i<elementCount; i++)
		cout << array[i] << endl;
	
	cout << "enter next array element value at the end of array " << endl;
	elementCount ++;
	cin >> array[elementCount-1];
	
	
	for(int i=0; i<elementCount; i++)
		cout << array[i] << endl;
		
	cout << "which position do you want to add more value " << endl;
	cin >> pos;
	
	
	for(int i=elementCount-1; i>=pos-1; i--)
		array[i+1] = array[i];
	
	cout << "enter a value " << endl;
	cin >> array[pos-1];
	
	
	for(int i=0; i<elementCount; i++)
		cout << array[i] << endl;;		 
}

	
