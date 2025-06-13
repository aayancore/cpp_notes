#include <iostream>
#include <string>
using namespace std;

int main(){
	int Marks[6];
	string Position[] = {"First", "Second", "Third", "Fourth", "Fifth", "Sixth"};
	int i = 0;
	while (i<6){
		cout << "enter " << Position[i] << " value " << endl;
		cin >> Marks[i];
		i++;
	}
		
//	for(int i = 0; i < 6; i++){
//		cout << "enter " << i+1 << " value " << endl;
//		cin >> Marks[i];
//	}
	int temp;
	
	i = 0;
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
	
