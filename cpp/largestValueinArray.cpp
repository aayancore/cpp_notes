#include <iostream>
using namespace std;

	int main() {
	int sumEven = 0, sumOdd = 0;
	int myNumbers[5] = {23, 32, 4, 56, 12}; // declared an array named myNumbers of integer data type having 5 elements.

	int largest = myNumbers[0];    //23
    for (int i=1; i<5; i++)
    	if (largest < myNumbers[i])
    	largest = myNumbers[i]; // 56
    
cout << "Largest values in array using for loop = " << largest << endl; 

    
    int smallest = myNumbers[0]; //23
    for (int i=1; i<5; i++)
    	if (smallest > myNumbers[i])
    	smallest = myNumbers[i]; //4
    
cout << "smallest value in array using for loop = " << smallest << endl;
    
    
    int i = 1;
    while (i<5){
		int smallest = myNumbers[0]; //23
    	if (smallest > myNumbers[i])
    	smallest = myNumbers[i]; //4    //4
		i++;
 	}	
cout << "smallest value in array using while loop = " << smallest << endl;

	
	i = 1;
    while (i<5){
		int largest = myNumbers[0]; //23
    	if (largest < myNumbers[i])
    	largest = myNumbers[i]; //4    //56
		i++;
	}	
cout << "largest value in array using while loop = " << largest << endl;
	
	
	




}


