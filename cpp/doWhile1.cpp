#include <iostream>
#include <string>
using namespace std;

int main(){

	string str = "My Name is  Muhammad and i   am 18 years     old ";
	int array[50];
	int elementCount=0;
	char more = 'y';
	
	do{
		cout << "enter a value " << endl;
		elementCount ++;
		cin >> array[elementCount-1];
		
		do {		
			cout << "Do you have more values y/n ?" << endl;
			cin >> more ;

			if ( !(more =='y' || more == 'Y' || more =='n' || more =='N')){
				cout << "select Y/y or N/n only " << endl;
				continue;
			}
			else
				break;
		} while (true);
		
	} while ( !(more =='n' || more =='N'));
	
	for(int i=0; i<elementCount ; i++)
		cout << array[i] << endl;
}

	
