#include <iostream>
using namespace std;

	int main() {
//	int sumEven = 0, sumOdd = 0, temp;
//	int myNumbers[6] = {9, 8, 6, 78, 25, 67}; // declared an array named myNumbers of integer data type having 5 elements.
//						//{6, 26, 9, 78, 25, 67}
//	//  sorting is either ascending or descending ASC/ DESC
//	//  int smallest = myNumbers[0]; //9
//
//	for (int j=0; j<5; j++)
//		for (int i = j+1; i < 6; i++) 
//			if (myNumbers[j] > myNumbers[i]) 
//			{	
//				temp = myNumbers[i];
//				myNumbers[i] = myNumbers[j];
//				myNumbers[j] = temp; 
//			}
//			
//	for (int i=0; i<6; i++)		
//		cout << myNumbers[i] << ", ";
//	cout << endl;	

	int sumPrime =0, sumComposite = 0;
	int n1, n2;	
	bool isComposite = false;
	cout << "enter first number "<<endl;
	cin >> n1 ;
	
	cout << "enter Second  number "<<endl;
	cin >> n2 ;
	
	for(int j=n1; j<=n2; j++){	
		isComposite = false;
		for (int i=2; i<j ; i++)
			if (j % i == 0) {
				isComposite = true;
				break;
		}
		if (isComposite == true){
			sumComposite += j;
			if(j % 2==0)
				cout << j << " is composite and even " << endl;
			else 
				cout << j << " is composite and odd " << endl;
		}	
 		else 
 		{
	 		cout << j << " is prime and odd " << endl;
	 		sumPrime = sumPrime + j;
	 	}
	}
	cout << "Sum of Prime Numbers = " << sumPrime << endl;
	cout << "Sum of Composite Numbers = " << sumComposite << endl;
}


