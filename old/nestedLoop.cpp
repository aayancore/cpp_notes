//#include <cstdlib>
#include <iostream>
//#include <conio.h>
using namespace std;

int main(){
	
	int myNumbers[6] = {45, 22, 78, 23, 8, 89};	
	int largest; 
//	
////	largest = myNumbers[0];
//	for(int i = 0; i < 6; i++)
//	cout << myNumbers[i] << endl;
//	cout << "in accending order " << endl;
//	
	largest = myNumbers[0]; // 45

	
	for (int j = 1; j < 6; j++){ // 22
		if (largest < myNumbers[j])
			largest = myNumbers[j]; // 89
	}
	cout << largest << endl;
}
