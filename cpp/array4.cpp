#include <iostream>
using namespace std;

	int main() {
//	int sumEven = 0, sumOdd = 0;
	int myNumbers[5]; // declared an array named myNumbers of integer data type having 5 elements.
	
//	for (int i = 0; i < 5; i++) {
//		cout << "enter a value " << i+1 << endl;
//		cin >> myNumbers[i]; // input first element of the array using keyboard
//	}
//	for (int i = 0; i < 5; i++) {
//		cout << "value " << i+1  << " = " << myNumbers[i]<< endl;
//	}
//	
	int i = 0;
	while (i < 5){
		cout << "enter a value " << i+1 << endl;
		cin >> myNumbers[i];
		i++;
    }
    i = 0;
   	while (i < 5){ 
    	cout << "value of " << i+1  << " = " << myNumbers[i] << endl;
    	i++;
    }	
	return 0;
}


