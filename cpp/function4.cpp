#include <iostream>
#include <string>
using namespace std;





int main(){
	string str = " My name is Mohammad and I live in Fontana, CA";
	string word="";
	string arrayWords[50];
	int wordCount = 0;
	
	for(int i=0; i<str.length(); i++)
		if(i>0 && str[i] == ' ' && str[i-1] != ' '){
		//	cout << endl;
			wordCount++;
			arrayWords[wordCount-1] = word;
			word = "";
		}
		else{
//			cout << str[i];
			word = word + str[i];		
		}
			
	if(str[str.length()-1] != ' '){
		wordCount++;
		arrayWords[wordCount-1] = word;
		word = "";
	}
		
	cout << "numbers of words in array is " << wordCount << endl;
	
	for(int i=0; i<wordCount; i++)
		cout << arrayWords[i] << endl;
		
 	return 0;

	
}

	
