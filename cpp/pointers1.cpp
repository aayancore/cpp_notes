#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main(){
		struct student {
		int rno;
		string name;
		int age;
		string city;
		int marks;	
		student *next;
	};
//	int i=10;
//	int *ptr = NULL;
//	
//	cout << "ptr = " << ptr << endl;
//	ptr = new int;
//	
//	cout << "ptr address  = " << ptr << endl;
//	
//	cout << "value at ptr address = " << *ptr << endl;
//	
//	*ptr = 100;
//	cout << "value at ptr address = " << *ptr << endl;
//	
//	delete ptr;
//	
 //	student *ptr1 = new student;
// 	(*ptr1).next = NULL;
// 	
// 	(*ptr1).rno = 2;
//	(*ptr1).name = "Tayyaba";
//	(*ptr1).age = 23;
//	(*ptr1).marks = 550;
//	(*ptr1).city = "lahore";
//
//	cout << (*ptr1).rno << endl;
//	cout << (*ptr1).name << endl;
//	cout << (*ptr1).age << endl;
//	cout << (*ptr1).marks<< endl;
//	cout <<(*ptr1).city << endl;
//	
//	student *ptr2 = new student;
//	(*ptr2).next = NULL;
//	
//	(*ptr2).rno = 3;
//	(*ptr2).name = "momi";
//	(*ptr2).age = 25;
//	(*ptr2).marks = 45;
//	(*ptr2).city = "fontana";
//	
//	(*ptr1).next = ptr2;
//	
//	student *ptr3;
//	
//	ptr3 = ptr1->next;
//	
//	cout << (*ptr3).name;
 	student *ptr1 = new student;
	ptr1->next = NULL;
 	ptr1->rno = 1;
	ptr1->name = "Tayyaba";
	ptr1->age = 23;
	ptr1->marks = 550;
	ptr1->city = "lahore";

	cout << ptr1->rno << endl;
	cout << ptr1->name << endl;
	cout << ptr1->age << endl;
	cout << ptr1->marks<< endl;
	cout << ptr1->city << endl;
	
	student *ptr2 = new student;
	ptr2->next = NULL;
	ptr2->rno = 2;
	ptr2->name = "momi";
	ptr2->age = 25;
	ptr2->marks = 45;
	ptr2->city = "fontana";
	ptr1->next = ptr2;
	
	student *ptrA;
	ptrA = ptr1->next;
	cout << ptrA->name << endl;
	
	student *ptr3 = new student;
	ptr3->next = NULL;
	ptr3->rno = 3;
	ptr3->name = "tahira";
	ptr2->next = ptr3;
	
	ptrA = ptr1;
	cout << ptrA->name << endl;
	ptrA = ptr1->next; // ptr2
	cout << ptrA->name << endl;
	ptrA = ptr2->next; // ptr3;
	cout << ptrA->name << endl;
	
	ptrA = ptr1->next->next;
	cout << ptrA->name << endl;
	cout << "_____________________" << endl;
	
	ptr2 = NULL;
	ptr3 = NULL;
	
	ptrA = ptr1;
	cout << ptrA->name << endl;
	ptrA = ptr1->next; // ptr2
	cout << ptrA->name << endl;
	ptrA = ptr2->next; // ptr3;
	cout << ptrA->name << endl;
	
	return 0;
}

	
