#include <iostream>
#include <string>
using namespace std;

int main(){
	int Marks[] = {12, 21, 44, 34, 56, 22};
	int temp;
	
	for (int i=0; i<6; i++)
		cout << Marks[i] << endl;
		
	for (int i=0; i<3; i++)
		for (int j=i+1; j<6; j++)		
			if (Marks[i] < Marks[j]) {
				temp = Marks[i];
				Marks[i] =  Marks[j];
				Marks[j] = temp;
			}
			
	cout << "First Position = " << Marks[0] << endl;
	cout << "Second Position= " << Marks[1] << endl;
	cout << "third Position = " << Marks[2] << endl;


	for (int i=0; i<6; i++)
		cout << Marks[i] << endl;
		
	
}
