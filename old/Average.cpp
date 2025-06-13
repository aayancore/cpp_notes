#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){

	int score1, score2, score3;
	double average; 
	cout << "Enter first score" <<endl ;
	cin >> score1; 
	cout << "Enter 2nd score " << endl;
	cin >> score2;
	cout << "Enter 3rd score " << endl;
	cin >> score3;
	average = (score1 + score2 + score3) / 3;
	cout << "Average Score = " << average << endl;
}
