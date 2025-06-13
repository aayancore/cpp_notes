#include <iostream>
#include <string>
using namespace std;



	string str = "My Name is  Muhammad and i   am 18 years     old ";

void reverseString(){	
	cout << "string in revser order is " << endl;
	for(int i= str.length()-1; i>=0; i--)	
		cout << str[i];
	cout << endl;
}

int spaceCount(){
	int spaceCount = 0;
	for(int i=0; i<str.length(); i++)
		if(str[i] == ' ')
			spaceCount ++;
	return spaceCount;
}

int vowelsCount(){
	int vowelsCount = 0;
	for(int i=0; i<str.length(); i++)
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u' )
			vowelsCount ++;
	return vowelsCount;
}

void toUpper(){
	cout << "converting lower to upper " << endl;
	char upper;
	for(int i=0; i<str.length(); i++)
		if(str[i] >= 'a' && str[i] <= 'z'){
			upper = str[i] - 32;
			cout << upper;
		}
		else 
			cout << str[i];
	cout << endl;
}

void toLower(){
	cout << "converting upper to lower " << endl;
	char lower;
	for(int i=0; i<str.length(); i++)
		if(str[i] >= 'A' && str[i] <= 'Z'){
			lower = str[i] + 32;
			cout << lower;
			}
		else 
			cout << str[i];
	cout << endl;
}

int wordCount(){
	int wordCount = 0;
	cout << "word count of the string is " << endl;
	for(int i=0; i<str.length(); i++)
		if(i >0 && str[i] == ' ' && str[i-1] != ' ')
			wordCount ++;
	//check last character in string. if not space, add one to wordCount
	if (str[str.length()-1] !=' ')
		wordCount++;	
	cout << "number of words is " << wordCount << endl;	
			
	return wordCount;
}

void aToz(){
	cout << "displaying a to z " << endl;
	for(char ch='a'; ch<='z'; ch++)
		cout << ch;
	cout << endl;
}

void AToZ(){
	cout << "displaying A to A " << endl;
	for(char ch='A'; ch<='Z'; ch++)
		cout << ch;
	cout << endl;		
}

void spaceToNewLine(){
	cout << "converting space to new line " << endl;
	for(int i=0; i<str.length(); i++)
		if(str[i] == ' ' && str[i-1] != ' ') 
			cout << endl;
		else
			if(str[i] != ' ')
				cout << str[i];
	cout << endl;
}

int main(){
	
	cout << str << endl;
	cout << "numbers of spaces in string array is " << spaceCount() << endl;
 	reverseString() ;
	cout << "numbers of vowels in string array is " << vowelsCount() << endl;
	toUpper();
	toLower();
	cout << "numbers of wrods in string array is " << wordCount() << endl;
	aToz();
	AToZ();
	spaceToNewLine();
 	return 0;

	
}

	
