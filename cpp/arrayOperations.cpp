#include <iostream>
#include <string>
using namespace std;

int array[50] = {12, 4, 67, 32, 98, 56};
int elementCount=6;
int pos;
	
void AddStart(){
	
	for(int i=elementCount-1; i>=0; i--)
		array[i+1] = array[i];	
		elementCount ++;	
	cout << "add element at the beginning of the array " << endl;
	cin >> array[0];		
}

void AddEnd(){
	cout << "enter next array element value at the end of array " << endl;
	elementCount ++;
	cin >> array[elementCount-1];	
}

void AddPos(){
	for(int i=elementCount-1; i>=pos-1; i--)
		array[i+1] = array[i];	
	cout << "enter a value " << endl;
	cin >> array[pos-1];
	elementCount ++;	
}

void DeleteElement(){
	
		if (pos == elementCount){
			//elementCount--;
			for(int i=0; i<elementCount; i++)
				cout << array[i] << endl;
		}
		else
		{
			for(int i=pos; i<elementCount; i++)
				// i=3
				array[i-1] = array[i];
		//	elementCount --;
		}
		elementCount --;
}

int main(){
	int sum=0;
	int product=1;
	char choice ;
	do {
		for(int i=0; i<elementCount; i++)
			cout << array[i] << "\t";
		cout << endl;
		cout << "what do you want to do ? a/d/n ?" << endl;
		cin >> choice ;
		if (choice == 'a'){
			cout << "which position of array you want ? "<< endl;
			cin >> pos; 
			if (pos > elementCount)
				cout << "value should be b/w 1 and " << elementCount << endl;
			else
			{
				if (pos == 1)
					AddStart();
				if (pos == elementCount+1)
					AddEnd();
				else
					AddPos();	
			}
		
		}
		
		if (choice =='d'){
			cout << "which position of array you want ? "<< endl;
			cin >> pos; 
			if (pos > elementCount)
				cout << "value should be b/w 1 and " << elementCount << endl;
			else
				DeleteElement();
		}
		if (choice =='n')
			break;								
			
	} while (true);
}

	
