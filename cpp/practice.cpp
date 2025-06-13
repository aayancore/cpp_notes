#include <iostream>
#include <string>
using namespace std;

int main(){

	string str = "My Name is  Muhammad and i   am 18 years     old ";
	int spaceCount = 0;
	int vowelsCount = 0;
	char lower;
	char upper;
	int wordCount = 0;
	
	//string in reverse order
	cout << "string in reverse order " << endl;
	for(int i= str.length()-1; i>=0; i--)	
	cout << str[i];
	
	//space count in array
	for(int i=0; i<str.length(); i++)
		if(str[i] == ' ')
			spaceCount ++;
	cout << endl << "numbers of spaces in string array is " << spaceCount;
	
	//vowels count in string array
	for(int i=0; i<str.length(); i++)
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u' )
			vowelsCount ++;
	cout << endl << "numbers of vowels in string array is " << vowelsCount << endl;
	
	//string
	cout << str << endl; 
	
	//converting lower to upper
	for(int i=0; i<str.length(); i++)
		if(str[i] >= 'a' && str[i] <= 'z'){
			upper = str[i] - 32;
			cout << upper;
		}
		else 
			cout << str[i];
	cout << endl;
			
	//converting upper to lower
	for(int i=0; i<str.length(); i++)
		if(str[i] >= 'A' && str[i] <= 'Z'){
			lower = str[i] + 32;
			cout << lower;
		}
		else 
			cout << str[i];
	cout << endl;
	
	//converving space to new line
	for(int i=0; i<str.length(); i++)
		if(str[i] == ' ' && str[i-1] != ' ') 
			cout << endl;
		else
			if(str[i] != ' ')
				cout << str[i];
	cout << endl;
				
	//word count in string array
	for(int i=0; i<str.length(); i++)
		if(i >0 && str[i] == ' ' && str[i-1] != ' ')
			wordCount ++;
	//check last character in string. if not space, add one to wordCount
	if (str[str.length()-1] !=' ')
		wordCount++;	
	cout << "number of words is " << wordCount << endl;			
	
	//displaying a to z
	cout << "displaying a to z " << endl;
	for(char ch='a'; ch<='z'; ch++)
		cout << ch;
	cout << endl;
	
	//displaying A to Z	
	cout << "displaying A to A " << endl;
	for(char ch='A'; ch<='Z'; ch++)
		cout << ch;
	cout << endl;		
	
			
	

	
	
}

	
