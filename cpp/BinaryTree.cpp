#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

	struct student {
		student *left;	
		int marks;	
		student *right;
	};
	student *newNode;
	
	bool insertLocationFound(student *ptr){
	if (newNode->marks < ptr->marks)
		if (ptr->left == NULL){
			ptr->left = newNode;
			return true;
		}			
		else		
			return insertLocationFound(ptr->left);
	else
		if (ptr->right == NULL){
			ptr->right = newNode;
			return true;
		}			
		else
			return insertLocationFound(ptr->right);
}
void Traverse(student *ptr){
	if (ptr != NULL){
		cout << ptr->marks << " , ";
		Traverse(ptr->left);
		Traverse(ptr->right);
	}
}
void TraverseAscending(student *ptr){
	if (ptr != NULL){
		TraverseAscending(ptr->left);
		cout << ptr->marks << " , ";
		TraverseAscending(ptr->right);
	}
}
void TraverseDescending(student *ptr){
	if (ptr != NULL){
		TraverseDescending(ptr->right);
		cout << ptr->marks << " , ";
		TraverseDescending(ptr->left);
		
	}
}
int main(){

	char choice;
	int nodeCount=0;
	student  *Head;
	
	newNode = new student;
	newNode->left = NULL;
	newNode ->right = NULL;
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
			newNode->left = NULL;
			newNode ->right = NULL;
			nodeCount ++;			
			cout << "enter marks " << endl;
			cin >> newNode->marks;
			
			//linking new node
			//prev->next = current;
			if (insertLocationFound(Head))
			{
				cout << "New Node inserted !" << endl;												
				continue;
			}
			else
			{
				cout << "Some error while inserting !" << endl;
				break;
			}		
		}
		else
			if (choice == 'n' || choice == 'N')
				break;	
			else
				cout << "invalid choice . use y or n only" << endl;
	}
	//Traverse(Head);

	cout << endl<< "Ascending Order List " << endl;
	TraverseAscending(Head);
	cout << endl<< "Descending Order List " << endl;
	TraverseDescending(Head);
	cout << endl <<  "number of elements = " << nodeCount << endl;
	cout << "end of program " << endl;
	return 0;
}
