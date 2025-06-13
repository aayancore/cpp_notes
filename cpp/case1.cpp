#include <iostream>
#include <string>
using namespace std;

int main(){
	int Marks[] = {12, 6, 34, 54, 22};
//	for (int i=0; i< 5; i++)
//		cout << Marks[i] << endl;
	
	//cout << "size of Marks array = " << sizeof(Marks) << endl;
	string name = "Mohammad Aayan Malik fadsj af; ;lkjfadsj fj ladsjfadsljkf asd" ;
	int count = 0;
	int spaceCount = 0;
	int vowels = 0;
	for (int i=name.length() -1; i>=0; i--){
		switch (name[i]) {
			case 'm':
			case 'M':
				count ++;
				break;
			case ' ':
				spaceCount ++ ;
				break;
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowels ++;
				break;
		}
	}

	cout << "numbers of M and m is " << count << endl; 
	cout << "number of space chracters is " << spaceCount << endl;
	cout << "numbers of vowels is " << vowels;
	
	
	
//	cout << "String name length " << name.length();
//int day = 7;
//	switch (day) {
//	  case 1:
//	    cout << "Monday";
//	    break;
//	  case 2:
//	    cout << "Tuesday";
//	    break;
//	  case 3:
//	    cout << "Wednesday";
//	    break;
//	  case 4:
//	    cout << "Thursday";
//	    break;
//	  case 5:
//	    cout << "Friday";
//	    break;
//	  case 6:	   
//	  case 7:
//	    cout << "Weekend";
//	    break;
//	  default :
//			cout << " Days value should be between 1 and 7" << endl;
//	}
//	
//	int Marks = 80;
//	switch (Marks) {
//		case 90:
//			cout << "A+";
//			break;
//		default :
//			cout << endl <<"not enough marks" ;
//	}		
}
	
