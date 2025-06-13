#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
//	int sum =0;
//	for ( int i = 1; i<=10; i++){
//		cout << i << endl;
//		sum = sum + i;
//	}
//	cout << sum << endl;
	
//	int number;
//	cout << "enter a number " << endl;
//	cin >> number;
//	
//	int i=1;
//	while (i <=10){
//		cout << number << " * " << i << " = " << number*i << endl;
//		i++;
//	}
//		
//	i=1;
//	int sum =0;
//	while (i <=10){
//		sum = sum + i;
//		i++;
//	}
//	cout << sum << endl;		
	
//	int number;
//	cout << " enter a number to check wheter its composite or prime " << endl;
//	cin >> number;
//	bool isComposite = false;
//	
//	int i=2;
//	while (i <= number-1){
//	
//		if (number % i == 0) {
//			isComposite = true;
//			break;
//		}
//		i++;
//	}
//	if(isComposite == true)
//		cout << "number is composite " << endl;
//	else
//		cout << "number is prime " << endl;



//	int number;
//	cout << "enter a number " << endl;
//	cin >> number;
//	
//	int i=1;
//	while (i <=10){
//		cout << number << " * " << i << " = " << number*i << endl;
//		i++;
//	}
	
	
	
	int number, firstNumber, secondNumber;
	cout << " enter a firstNumber to check wheter its composite or prime " << endl;
	cin >> firstNumber;
	cout << " enter a secondNumber to check wheter its composite or prime " << endl;
	cin >> secondNumber;
	
	if (firstNumber < secondNumber){
		number = firstNumber;
		while (number <= secondNumber){
			bool isComposite = false;	
				int i=2;
				while (i <= number-1){
					if (number % i ==0 ){
						isComposite = true;
						break;
					}
					i++;
				}
				
				if (isComposite == true)
					cout << "number is composite " << number << endl;
				else
					cout << "number is prime " << number << endl;
		
			number++; 
		}
	}
	else{
		number = secondNumber;
		while (number <= firstNumber){
			bool isComposite = false;	
				int i=2;
				while (i <= number-1){
					if (number % i ==0 ){
						isComposite = true;
						break;
					}
					i++;
				}
				
				if (isComposite == true)
					cout << "number is composite " << number << endl;
				else
					cout << "number is prime " << number << endl;
		
			number++;
		}
	}

}

	




