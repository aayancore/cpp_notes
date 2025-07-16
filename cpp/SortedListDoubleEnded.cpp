#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main(){
	struct student {
		student *prev;	
		int marks;	
		student *next;
	};
	
	char choice;
	int nodeCount=0;
	student  *Head, *eachNode, *prevNode;
	
	student *newNode = new student;
	newNode->next = NULL;
	newNode ->prev = NULL;
	nodeCount++;
	cout << "enter marks " << endl;
	cin >> newNode->marks;
	Head = newNode;
	
	while(true){
		cout << "do you want to add more? y/n " << endl;
		cin >> choice;
		if(choice == 'y' || choice == 'Y'){
				
			//New Node
			newNode = new student;
			newNode->next = NULL;
			newNode ->prev = NULL;
			nodeCount ++;			
			cout << "enter marks " << endl;
			cin >> newNode->marks;
			
			//linking new node
			//prev->next = current;
			eachNode = Head;
			while(eachNode != NULL){
				if (newNode->marks < eachNode->marks){
					if (eachNode == Head){
						newNode->next = Head;
						Head = newNode;					
					}
					else{
						prevNode->next = newNode;
						newNode->next = eachNode;						
					}
					break;				
				}
				//goto next node to check
				prevNode = eachNode;
				eachNode = eachNode->next;
			}
			
			// if new node marks are greater, move to the end;
			if (eachNode == NULL)
				prevNode->next = newNode;
		}
		else
			if (choice == 'n' || choice == 'N')
				break;	
			else
				cout << "invalid value. use y or n only" << endl;
	}
	
	//finally set prev addresses one by one.
	prevNode = Head;
	eachNode = Head->next;
	
	while(eachNode != NULL) {
		eachNode-> prev = prevNode;	
		prevNode = eachNode;
		eachNode = eachNode->next;	
	}
	prevNode-> next = Head;
	Head-> prev = prevNode;
	
	//Display in ascending order
	cout << "Ascending order "<< endl;
	eachNode = Head;
	do {
		cout << "Marks = " << eachNode->marks << endl;
		eachNode = eachNode->next;
	} while(eachNode != Head);
	
	//display descending order 
	cout << "Descending order "<< endl;
	eachNode = Head->prev;
	do {
		cout << "Marks = " << eachNode->marks << endl;
		eachNode = eachNode->prev;
	} while(eachNode != Head);
	
	cout << "number of elements = " << nodeCount << endl;
	cout << "end of program " << endl;
	return 0;
}
