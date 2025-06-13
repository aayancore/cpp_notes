#include <iostream>
using namespace std;

	int main() {
	int myNumbers[5];
	
	for (int i = 0; i < 5; i++){
		cout << "enter a value " << endl;
		cin >> myNumbers[i];
	}
	for (int i = 0; i < 5; i++)
	cout << "value of the element " << i+1 << " = " << myNumbers[i] << endl;
	
	return 0;
}


