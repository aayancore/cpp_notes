#include <iostream>
#include <string>
using namespace std;

int main(){
//	int Marks[] = {12, 6, 34, 54, 22,44};

	string str = "Muhammad Aayan Malik fadsj af; ;lkjfadsj fj ladsjfads,ljkf asd" ;
	cout << "enter a line of text " << endl;
//	cin >> str;
	getline(cin, str);
//	int code, codelow, codeup;
//	char lower;
//	for(char upper= 'A'; upper<='Z'; upper++){
//		code = upper;
//		lower = upper+32;
//		cout << "lower case " << lower << " = " << code+32 << " , upper case " << upper << " = " << code << endl;
//	}
	
//	for (char chlower='a', chupper = 'A'; chupper <='Z'; chlower++, chupper++)
//	{
//		codelow=chlower;
//		codeup = chupper;
//		cout << "lower case " << chlower << " = " << codelow << " , upper case " << chupper << " = " << codeup << endl;
//	}
//
//	char upper;
//	int spaceCount = 0;
//	for (int i=0; i< str.length()-1; i++){
//		if (str[i] >='a' && str[i] <='z'){
//			upper = str[i]-32;
//			cout << upper;
//		}
//		else
//			cout << str[i];
//	}
//	cout << "\nnumber of spaces in string = " << spaceCount << endl;
	
	char lower;
	int lowerCount = 0;
	int upperCount = 0;
	int vowels = 0;
	int spaceCount = 0;
	for (int i=0; i<str.length(); i++){ 
	
		//vowels count
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			vowels ++;
			
		//space count
		if(str[i] == ' ')
			spaceCount = spaceCount +1;
			
		//numbers of lower case chracters in string
		if(str[i] >='a' && str[i] <= 'z')
			lowerCount ++;
		
		//numbers of upper case chracters in string
		if (str[i] >='A' && str[i] <= 'Z')
			upperCount ++;
			
		//converting upper to lower case
		if(str[i] >='A' && str[i] <= 'Z'){
			lower = str[i]+32;
			cout << lower;
		}
		else{
			//removing ; and , in string 1st way
		//	cout << str[i];
		//	if(str[i] != ';' && str[i] != ',')
		//		cout << str[i];
	
			//removing ; and , in string 2nd way
			if (str[i] == ';' || str[i] == ',')
				continue;
			else
				cout << str[i];
		}
	}
	cout << endl << "numbers of spaces in string is " << spaceCount;
	cout << endl << "numbers of vowels in string is " << vowels;
	cout << endl << "numbers of lowercase in string is " << lowerCount;
	cout << endl << "numbers of upperCount in string is " << upperCount;

}
	
