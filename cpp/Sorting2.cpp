#include <iostream>
#include <string>
using namespace std;

int main(){
	int Marks[] = {12, 21, 44, 34, 56, 22};
	int temp;
	
	int i = 0;
	while (i < 6){
		cout << Marks[i] << endl;
		i++;
	}
	int j = 0;
	while (j<5){
		i = j+1;
		while (i<6){
			if (Marks[i] < Marks [j]){
				temp = Marks[i];
				Marks[i] = Marks[j];
				Marks[j] = temp;
			}
			i++;
		}
		j++;
	}
	cout << "Sorted Array using while loop" << endl;
	i=0;
	while (i<6){
		cout << Marks[i] << endl;
		i++;
	}
}
	
