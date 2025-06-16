#include <iostream>
#include <string>
using namespace std;

int main(){

	struct student {
		int rno;
		string name;
		int age;
		string city;
		int marks;
		bool married;
	} Mohammad;
	
	student Tayyyaba;
	student Awais;
	
	
	Mohammad.rno = 1;
	Mohammad.age = 18;
	Mohammad.marks = 100;
	
	
	Tayyyaba.rno = 2;
	Tayyyaba.age = 22;
	Tayyyaba.marks = 300;
	
	
	Awais.rno = 3;
	Awais.age = 25;
	Awais.marks = 200;
	
	
	
	cout << "student 1 rno " << Mohammad.rno << endl;
	cout << "student 1 age " << Mohammad.age << endl;
	cout << "student 1 marks " << Mohammad.marks << endl;
	
	cout << endl;

	cout << "student 2 rno " << Tayyyaba.rno << endl;
	cout <<  "student 2 age " << Tayyyaba.age << endl;
	cout <<  "student 2 marks  " << Tayyyaba.marks << endl;

	cout << endl;

	cout << "student 3 rno " << Awais.rno << endl;	
	cout << "student 3 age " << Awais.age << endl;
	cout << "student 3 marks " << Awais.marks << endl;
}

	
