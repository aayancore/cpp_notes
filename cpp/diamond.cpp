#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;


int main(){
	int j=5;

	COORD c;
    c.X = 10;
    c.Y = 1;
	
	for(int i=1; i<=4; i++){
  		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		for (j=1;j<=i; j++)
			cout << j << ' ';
		for (j=i-1; j>=1; j--)
			cout << j << ' ';
		c.X = c.X - 2;
		c.Y = c.Y + 1;
	}
    
  	for(int i=5; i>=1; i--){
  		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		for (j=1;j<=i; j++)
			cout << j << ' ';
		for (j=i-1; j>=1; j--)
			cout << j << ' ';
		c.X = c.X +2;
		c.Y = c.Y + 1;
	}
	
	cout << endl;
	cout << endl;
	
	
	
	
	
}
