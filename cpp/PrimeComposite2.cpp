#include <iostream>
using namespace std;

	int main() {
	int n;
	bool isComposite = false;
	cout << "enter a number " << endl;
	cin >> n;
	
	isComposite = false;
	for (int i = 2; i < n; i++)
		if (n % i == 0){
		isComposite = true;
		break;
	}
	if (isComposite == true)
		cout << "number is composite " << endl;
	else
		cout << "number is prime " << endl;	
}



