#include <iostream>
#include <string>
using namespace std;

int array[50] = {12, 4, 67, 32, 98, 56};

int pos;
	
void AddStart(int &elementCount){
	
	for(int i=elementCount-1; i>=0; i--)
		array[i+1] = array[i];	
		elementCount ++;	
	cout << "add element at the beginning of the array " << endl;
	cin >> array[0];		
}

void AddEnd(int &elementCount){
	cout << "enter next array element value at the end of array " << endl;
	elementCount ++;
	cin >> array[elementCount-1];	
}

void AddPos(int &elementCount){
	for(int i=elementCount-1; i>=pos-1; i--)
		array[i+1] = array[i];
	elementCount++;
	cout << "enter a value " << endl;
	cin >> array[pos-1];
}

void DeleteElement(int &elementCount){
	
		if (pos != elementCount)
			for(int i=pos; i<elementCount; i++)
				array[i-1] = array[i];
		elementCount --;
}

int main(){
	int sum=0;
	int elementCount=6;
	int product=1;
	char choice ;
	do {
		for(int i=0; i<elementCount; i++)
			cout << array[i] << "\t";
		cout << endl;
		cout << "what do you want to do ? a/d/n ?" << endl;
		cin >> choice ;
		
		switch(choice){
			case 'a':
			case 'A':
				cout << "which position of array you want ? "<< endl;
				cin >> pos; 
				if (pos > elementCount+1)
					cout << "value should be b/w 1 and " << elementCount << endl;
				else{
					if (pos == 1)
						AddStart(elementCount);
					else
						if (pos == elementCount+1)
							AddEnd(elementCount);
						else
							AddPos(elementCount);	
				}
				break;
			case 'd':
			case 'D':
				cout << "which position to delete ? "<< endl;
				cin >> pos;
				if (pos >elementCount)
					cout << "Invalid value " << endl;
				else				
					DeleteElement(elementCount);
				break;
			case 'n':
			case 'N':
				break;
			default:
				cout << "valid choice are a/d/n ?" <<endl;
				break;
		}
							
	} while (!(choice =='n' || choice == 'N'));
}

