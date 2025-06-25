#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;


int main(){
	
	string str2 = "abcdedcba";
	string str1 = "racecae"; //palindrome
	string str3 = "muhammad"; 
	int count=str2.length() / 2;	
	bool match = true; 
	
	for(int i=1; i<=count; i++){
		if(str2[i-1] != str2[str2.length()-i])
			match = false;
	}
	if(match == true)
		cout << "word is palindrome " << str2 << endl;	
	else
		cout << "word is not palindrome " << endl;
	
	
	
	
	
}
