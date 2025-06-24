#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int sum(int a, int b){
	return a+b;
}
int sum(int a, int b, int c){
	return a+b+c;
}
	

int main(){
	cout << "sum of 5 and 10 is " << sum(5, 10) << endl;
	cout << "sum of 5, 10, 15 is " << sum(5,10,15) << endl;
}
