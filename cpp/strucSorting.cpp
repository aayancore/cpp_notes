#include <iostream>
#include <string>
using namespace std;

int studentCount=0;
int smallestIndex; 

struct student{
		int rno;
		string name;
		int age;
		string city;
		int marks;
	};
void SortStudents(student sa[], string type){
	student temp;	
	for(int j=0; j<studentCount-1; j++){
		smallestIndex = j;
		for(int i=j+1; i<studentCount; i++){
			if (type == "city")
				if(sa[smallestIndex].city > sa[i].city)
						smallestIndex = i;
						
			if (type == "marks")
				if(sa[smallestIndex].marks > sa[i].marks)
					smallestIndex = i;
				
			if (type == "age")
				if(sa[smallestIndex].age > sa[i].age)
					smallestIndex = i;
					
			if (type == "name")
				if(sa[smallestIndex].name > sa[i].name)
					smallestIndex = i;
		}
		
		if(j != smallestIndex){
			temp = sa[smallestIndex];
			sa[smallestIndex] = sa[j];
			sa[j] = temp;
		}
	}
		
}	
void DisplayStudents(student sa[]){
	cout << "R No\t\t Name \t\t Age \t\t Marks \t\t City" << endl;
	for(int i=0; i<studentCount; i++){
		cout << sa[i].rno <<"\t\t";
		cout << sa[i].name << "\t\t";
		cout << sa[i].age << "\t\t";
		cout << sa[i].marks << "\t\t";	
		cout << sa[i].city << endl;		
	}
	cout <<"_______________________________________________" << endl;
}
int main(){
	
	student studentArray[50];	
	
	studentCount++;
	studentArray[studentCount-1].rno = 1;
	studentArray[studentCount-1].name = "Mohamad";
	studentArray[studentCount-1].age = 18;
	studentArray[studentCount-1].marks = 750;
	studentArray[studentCount-1].city = "Multan";
	
	studentCount++;
	studentArray[studentCount-1].rno = 2;
	studentArray[studentCount-1].name = "Tayyaba";
	studentArray[studentCount-1].age = 23;
	studentArray[studentCount-1].marks = 550;
	studentArray[studentCount-1].city = "lahore";
	
	studentCount++;	
	studentArray[studentCount-1].rno = 3;
	studentArray[studentCount-1].name = "Awais";
	studentArray[studentCount-1].age = 25;
	studentArray[studentCount-1].marks = 250;
	studentArray[studentCount-1].city = "karachi";
	
	studentCount++;	
	studentArray[studentCount-1].rno = 4;
	studentArray[studentCount-1].name = "Tahira";
	studentArray[studentCount-1].age = 48;
	studentArray[studentCount-1].marks = 450;	
	studentArray[studentCount-1].city = "islamabad";

	studentCount++;	
	studentArray[studentCount-1].rno = 5;
	studentArray[studentCount-1].name = "Malik";
	studentArray[studentCount-1].age = 54;
	studentArray[studentCount-1].marks = 980;
	studentArray[studentCount-1].city = "rawalpindi";

	cout << "students data " << endl;
	DisplayStudents(studentArray);
	
	cout << "index sorting on city " << endl;
	SortStudents(studentArray, "city");
	DisplayStudents(studentArray);
	
	cout << "index sorting on age " << endl;
	SortStudents(studentArray, "age");
	DisplayStudents(studentArray);
	
	cout << "index sorting on marks " << endl;
	SortStudents(studentArray, "marks");
	DisplayStudents(studentArray);
	
	cout << "index sorting on name " << endl;
	SortStudents(studentArray, "name");
	DisplayStudents(studentArray);
}

	
