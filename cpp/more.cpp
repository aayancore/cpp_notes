#include <iostream>
#include <string>
using namespace std;

int main(){

	string str = "My Name is  Muhammad and i   am 18 years     old ";
	int array[50];
	int elementCount=0;
	char more = 'y';
	int smallestIndex=0;
	int temp;
	
	do{
		cout << "enter a value " << endl;
		elementCount ++;
		cin >> array[elementCount-1];
		
		do{
			cout << "do you want more value y/n ? " << endl;
			cin >> more;
			
			if(more == 'y' || more == 'Y' || more == 'n' || more == 'N')
				break;
			else 
				cout << "please enter y/Y or n/N only " << endl;
				
		}while(true);
		
	}while(more == 'y' || more == 'Y');
	
	
	for(int i=0; i<elementCount; i++)
		cout << array[i] << endl;
		
	cout << "after sorting " << endl;
	
	for(int j=0; j<elementCount-1; j++){
		smallestIndex = j;
		for (int i=j+1; i<elementCount; i++){
			if(array[smallestIndex] > array[i])
				smallestIndex = i;
		}
		if(j != smallestIndex){
			temp = array[smallestIndex];
			array[smallestIndex] = array[j];
			array[j] = temp;
		}
	}
	for(int i=0; i<elementCount; i++)
		cout << array[i] << endl;
}

	
