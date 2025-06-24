#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main(){
		struct student {	
		int marks;	
		student *next;
	};
	
	char more;
	int elementCount=0;
	student  *Head, *prev;
 	student *current = new student;
	current->next = NULL;
	elementCount ++;
	cout << "enter marks " << endl;
	cin >> current->marks;
	Head = current;
	while(true){
		cout << "do you want to add more y/n ?" << endl;
		cin >> more;
		if (more == 'y' || more == 'Y'){
			prev = current;
			current = new student;
			elementCount ++;
			current->next = NULL;
			
			cout << "enter marks " << endl;
			cin >> current->marks;
		
			prev->next = current; // link to the previous node	
		}
		else
			if (more == 'n' || more == 'N')
				break;
			else
				cout << "Invalid Choice. Please select y/n ?" << endl;
	};
	current = Head;
	while(current != NULL){
		cout << "Marks = " << current->marks << endl;
		current = current->next;	
	}
	cout << "number of elements = " << elementCount << endl;
	cout << "end of program " << endl;
	return 0;
}

	
