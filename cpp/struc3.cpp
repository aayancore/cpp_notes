#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

	struct student {
		int rno;
		string name;
		int age;
		string city;
		int marks;	
	};
	student temp;
	student studentArray[20];
	int studentCount=5;

	
student GetNewRecord(){
	cout << "enter rno " << endl;
	cin >> temp.rno;
	cout << "enter name " << endl;
	cin >> temp.name;
	cout << "enter age " << endl;
	cin >> temp.age;
	cout << "enter marks " << endl;
	cin >> temp.marks;
	cout << "enter city " << endl;
	cin >> temp.city;
	
	return temp;
}

void DisplayAllRecords(){
	cout << "Roll Number\tName \t\t Age \t\tMarks \t\tCity\t\t" << endl;
	cout << "____________________________________________________________________________" << endl;  
	for(int i=0; i<studentCount; i++){
		cout << studentArray[i].rno << "\t\t";
		cout << studentArray[i].name << "\t\t\t";
		cout << studentArray[i].age << "\t\t";
		cout << studentArray[i].marks << "\t\t";	
		cout << studentArray[i].city << "\t\t\n";			
	}

	cout << "\n________________________________________________" << endl;	
}
int main(){

	int smallestIndex;
	int pos;
		
	studentArray[0].rno = 1;
	studentArray[0].name = "Mohamad";
	studentArray[0].age = 18;
	studentArray[0].marks = 750;
	studentArray[0].city = "Multan";
	
	studentArray[1].rno = 2;
	studentArray[1].name = "Tayyaba";
	studentArray[1].age = 23;
	studentArray[1].marks = 550;
	studentArray[1].city = "lahore";
	
	studentArray[2].rno = 3;
	studentArray[2].name = "Awais";
	studentArray[2].age = 25;
	studentArray[2].marks = 250;
	studentArray[2].city = "karachi";
	
	studentArray[3].rno = 4;
	studentArray[3].name = "Tahira";
	studentArray[3].age = 48;
	studentArray[3].marks = 450;	
	studentArray[3].city = "islamabad";
	
	studentArray[4].rno = 5;
	studentArray[4].name = "Malik";
	studentArray[4].age = 54;
	studentArray[4].marks = 980;
	studentArray[4].city = "rawalpindi";
	
	for(int i=0; i<studentCount; i++){
		cout << "Rno = " << studentArray[i].rno << endl;
		cout << "Name = " << studentArray[i].name << endl;
		cout << "age = " << studentArray[i].age << endl;
		cout << "Marks = " << studentArray[i].marks << endl;	
		cout << "City = " << studentArray[i].city << endl;	
		cout << "______________________" << endl;
	}
	
	for(int j=0; j<studentCount-1; j++){
		smallestIndex = j;
		for(int i=j+1; i<studentCount-1; i++){
			if(studentArray[smallestIndex].name > studentArray[i].name)
				smallestIndex = i;
		}
		if(j != smallestIndex){
			temp = studentArray[j];
			studentArray[j] = studentArray[smallestIndex];
			studentArray[smallestIndex] = temp;
		}
				
	}
	system("cls");
	//COORD c = {5,5};
//	COORD c;
//    c.X = 5;
//    c.Y = 5;
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	DisplayAllRecords();

	cout << "\n________________________________________________" << endl;
	
//	cout << "add student record at the end of array " << endl;
//	studentCount ++;
//	studentArray[studentCount-1] = GetNewRecord();
//	DisplayAllRecords();
//	
//	cout << "adding new record at the beginning " << endl;
//	for(int i=studentCount-1; i>=0; i--)
//		studentArray[i+1] = studentArray[i];
//	studentCount++;
//	studentArray[0] = GetNewRecord();
//	DisplayAllRecords();
	
//	cout << "which position do you want to add more record " << endl;
//	cin >> pos;
//	for(int i=studentCount-1; i>=pos-1; i--)
//		studentArray[i+1] = studentArray[i];
//	studentCount++;
//	studentArray[pos-1] = GetNewRecord();
//	DisplayAllRecords();

}

	
