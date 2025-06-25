#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;


int main(){
	int array1[] = {2,43, 55, 66, 22,45};
	int array2[]= {55,23};
 	int n;
	bool found;
	
//	cout << "enter a value " << endl;
//	cin >> n;
	
	for(int j=0; j<2; j++){
		found = false;
		for(int i=0; i<6; i++)
			if(array2[j] == array1[i]){
				found = true;
				break;
			}
	//	if(found == false)
		if (!found)
			break;	
	}
	if(found)
		cout << "array2 is a subset of array1 " <<  endl;
	else
		cout << "array2 is not a subset of array1 " <<  endl;
}
