#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){

	int obtainedMarks, totalMarks;
	double percentage; 
	cout << "Enter obtained marks" <<endl ;
	cin >> obtainedMarks; 
	cout << "Enter total Marks " << endl;
	cin >> totalMarks;
	percentage = obtainedMarks * 100 / totalMarks;
	cout << "Percentage = " << percentage << endl;
}
