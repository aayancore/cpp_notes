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
	student *Head, *newNode, *current, *prevNode;
	char choice = 'y';
	Head = new student;
	Head->next = Head;
	Head->prev = Head;
	cout << "enter marks " << endl;
	cin >> Head->marks;
	
	while (choice=='y'){
		newNode = new student;
		cout << "enter marks " << endl;
		cin >> newNode->marks;
		
		//linking new node
		current = Head;
		while(current->next != Head){
			if (newNode->marks < current->marks){
				if (current == Head){
					newNode->next = current;
					newNode ->prev = Head->prev;					
					Head = newNode;	
					Head->next = current;
					current->prev = Head;														
				}
				else{
					prevNode->next = newNode;
					newNode->next = current;
					
					newNode->prev = prevNode;
					current->prev = newNode;						
				}
				break;				
			}
			//goto next node to check
			prevNode = current;
			current = current->next;
		}
		
		// if new node marks are greater, move to the end;
		if (current->next == Head)
		{
			current->next =  newNode;
			newNode->prev = current;
			newNode -> next = Head;
			Head->prev = newNode;
		}							

	//	current = newNode;
		cout << "do you want more "<< endl;
		cin >> choice;
	}
	
	current = Head;
	cout << "List created is forward direction" << endl;
	do{
		cout << current->marks << endl;
		current = current->next;
	} while (current != Head);

	current = Head;

	cout << "List created is reverse direction" << endl;
	do {
		current = current->prev;
		cout << current->marks << endl;
		
	} while (current != Head);

	return 0;
}
