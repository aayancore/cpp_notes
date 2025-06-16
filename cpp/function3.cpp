#include <iostream>
#include <string>
using namespace std;


int main(){
	int Marks[] = {32,23,55,66,45};
	string str = "My name is Mohammad and I live in Fontana, CA ";
	string strWords[50] ;
	string word="";
	int wordCount=0;
	int i=0;
	while (i<str.length()){
		if (str[i] != ' ')
			word = word + str[i];		
		else{
			strWords[wordCount] = word;
			word="";
			wordCount++;
		}
		i++;
	}
	cout << "number of words = " << wordCount << endl;
	for (int i=0; i<wordCount; i++)
		cout << strWords[i] << endl;
}

	
