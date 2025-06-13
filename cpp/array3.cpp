#include <iostream>
using namespace std;

int main() {
//	int sumEven = 0, sumOdd = 0;
  int myNumbers[8] = {12, 45, 56, 23, 96, 87, 123, 78};
//  for (int i = 0; i < 8; i++) {
//  	if (myNumbers[i] % 2 == 1)
//    	sumOdd = sumOdd + myNumbers[i];
//    else 
//   		sumEven = sumEven + myNumbers[i];
//  }
//  cout << "sum of all odd numbers in array = " << sumOdd << endl;
//  cout << "sum of all even numbers in array = " << sumEven << endl;
//  
//cout << "all element * 2 using for loop " << endl;
//  
//  for (int i = 0; i < 8; i ++)
//  	cout << myNumbers[i]*2 << endl;
//  	
//cout << "all element in backward using for loop" << endl;
//  	
//	for (int i = 7; i >= 0; i--)
//		cout << myNumbers[i] << endl;
//		
////cout << "all element using while loop " << endl;
//	
//	int i = 0;
//	while (i <= 7){
//		cout << myNumbers[i] << endl;
//		i++;
//	}
//cout << "all element in backward using while loop" << endl;
//  	int i = 7;
//  	while (i >= 0){
//  		cout << myNumbers[i] << endl;
//  		i--;
//	} 	
	
//cout << "all element * 2 using while loop" << endl;
//	int i = 0;
//	while (i <= 7){
//		cout << myNumbers[i]*2 << endl;
//		i++;
//	}
	
cout << "sum of elements using while loop" << endl;
	int sum = 0;
	int i = 0;
	while (i <= 7){
		cout << myNumbers[i] << endl;
		i++;
	}
	sum = sum + myNumbers[i];	
	cout << sum << endl;
	return 0;
}


