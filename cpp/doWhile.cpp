#include <iostream>
#include <string>
using namespace std;

int main(){

	int i=0;
	char more=' ';
	do {
		cout << "do you want more ?y/n " << endl;
		cin >> more ;
		
		if ( !(more =='y' || more == 'Y' || more =='n' || more =='N'))
		{
			cout << "select Y/y or N/n only " << endl;
			continue;
		}
	} while ( !(more =='n' || more =='N'));
	

	
	
}

	
