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
	student *Head, *newNode, *current;
	char choice = 'y';
	Head = new student;
	Head->next = NULL;
	Head->prev = NULL;
	cout << "enter marks " << endl;
	cin >> Head->marks;
	current = Head;
	while (choice=='y'){
		newNode = new student;
		newNode ->next = Head;
		Head->prev = newNode;

		cout << "enter marks " << endl;
		cin >> newNode->marks;
		
		current ->next = newNode;
		newNode ->prev = current;

		current = newNode;
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
