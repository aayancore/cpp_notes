#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b){
	return a+b;
}

double sum(double a, double b){
	return a+b;
}
int sum(int a, int b, int c){
	return a+b+c;
}
int main(){
	 cout << "sum of integers 5 and 10 = " << sum(5, 10) << endl;
	cout << "sum of integers 5 and 10 = " << sum(5.5, 10.5) << endl;
	cout << "sum of 4 , 5 6  =" << sum(4,5,6);

}

	
