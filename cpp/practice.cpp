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
	student *ptr1 = new student;
	ptr1->next = NULL;
	ptr1->age=18;
	ptr1->name="momi";
	cout << ptr1->age << endl;
	cout << ptr1->name << endl;
	
	student *ptr2 = new student;
	ptr2->next = NULL;
	ptr2->age=23;
	ptr2->name="tayyaba";
	cout << ptr2->age << endl;
	cout << ptr2->name << endl;
	ptr1->next = ptr2;
	
	
	student *ptr3 = new student;
	ptr3->next = NULL;
	ptr3->age = 25;
	ptr3->name = "awais";
	cout << ptr3->age << endl;
	cout << ptr3->name << endl;
	ptr2->next = ptr3;
	
	student *ptrA;
	ptrA = ptr1->next->next;
	cout << ptrA->age << endl;
	cout << ptrA->name << endl;
	
	
	
}
