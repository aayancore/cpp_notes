#include <iostream>
#include <string>
using namespace std;

	int elementCount=6;

int ArraySum(int array[]){
	int sum=0;
	for(int i=0; i<elementCount; i++)
		sum = sum + array[i];
	return sum;
}

int ArrayProduct(int array[]){
	int product=1;
	for(int i=0; i<elementCount; i++)
		product = product * array[i];
	return product;
}

int main(){
	int array[50] = {12, 4, 67, 32, 98, 56};
	int pos;
	
//	cout << "enter next array element value at the end of array " << endl;
//	elementCount++;
//	cin >> array[elementCount-1];
//	for(int i=0; i<elementCount; i++)
//		cout << array[i] << endl;
//		
//				
//	for(int i=elementCount-1; i>=0; i--)
//		array[i+1] = array[i];
//	elementCount++;
//	cout << "enter new element at the end of the array " << endl;
//	cin >> array[0];
//	for(int i=0; i<elementCount; i++)
//		cout << array[i] << endl;
		
		
	cout << "which postition do you want to add more value " << endl;
	cin >> pos;
	for(int i=elementCount-1; i>=pos-1; i--)
		array[i+1] = array[i];
	cout << "enter a value " << endl;
	cin >> array[pos-1];
	for(int i=0; i<elementCount; i++)
		cout << array[i] << endl;
		
	

	cout << "sum of the array is " << ArraySum(array) << endl;

	cout << "* of array is " << ArrayProduct(array) << endl;	 
}

	
