#include <iostream>
#include <string>
using namespace std;

int main(){

	string str = "My Name is  Muhammad and i   am 18 years     old ";
	int array[]= {24, 45, 12, 56, 36, 67};
				//7, 12, 32, 22, 45, 25
			//	        22, 32 ...
				
	int temp, smallestIndex;
	for(int i=0; i<6; i++)
	cout << array[i] << endl;
		
	for(int j=0; j<5; j++){
		smallestIndex = j;
		for(int i=j+1; i<6; i++){
			if(array[i] < array[smallestIndex])
				smallestIndex = i;
		}
		if(j != smallestIndex){
			temp = array[j];
			array[j] = array[smallestIndex];
			array[smallestIndex] = temp;
		}
	}
	
	cout << "array in A sorting order is " << endl;
	
	for(int i=0; i<6; i++)
		cout << array[i] << endl;
}

	
