#include <iostream>
#include <string>
using namespace std;


int WordCount(string str1, string array1[]){
	
	string word="";
	int wordCount1=0;
	for(int j=0; j<str1.length(); j++){
		if(j>0 && str1[j] == ' ' && str1[j-1] != ' '){
			wordCount1++;
			array1[wordCount1-1] = word;
			word = "";
		}
		else
			if(!(str1[j] == ' ' && word == ""))
				word = word + str1[j]; 
	}
	if(word != ""){
		wordCount1++;
		array1[wordCount1-1] = word;
		word = "";
	}
	return wordCount1;
}

void IndexSortWords(string array2[], int wordCount2){
	int smallestIndex;
	string temp;
	
	for(int j=0; j<wordCount2-1; j++){
		smallestIndex = j;
		for(int i=j+1; i<wordCount2; i++)
			if(array2[smallestIndex] > array2[i])
				smallestIndex = i;
		if(j != smallestIndex){
			temp = array2[smallestIndex];
			array2[smallestIndex] = array2[j];
			array2[j] = temp;
		}	
	}
	return;
}

void SwapSortWords(string array3[], int wordCount3){
	
	string temp;
	for(int j=0; j<wordCount3-1; j++){
		for(int i=j+1; i<wordCount3; i++)
			if(array3[j] > array3[i]){
				temp = array3[j];
				array3[j] = array3[i];
				array3[i] = temp;
			}		
	}
}


int main(){

	string str;
	string array[50];
	int wordCount;
	char more;
	
	cout << "Welcome to Word Count Program " << endl;
	
	//main program loop		
	do{		
		cout << "enter a text string " << endl;
		getline(cin, str);
		cout << str << endl;
		wordCount = WordCount(str, array);
		
	//	IndexSortWords(array, wordCount);
		SwapSortWords(array, wordCount);
		cout << "number of words is " << wordCount << endl;
		for(int i=0; i<wordCount; i++)
			cout << array[i] << endl;
			
		//to check more values 
		do {		
			cout << "do you want to try again y/n or Y/N ? " << endl;
			cin >> more;
			// clear the input buffer
			while (getchar() != '\n');
			if(more == 'y' || more == 'Y' || more == 'n' || more == 'N')
				break;
			else
				cout << "please enter y/Y or n/N only " << endl;
				
		} while(true);
			
	}while(more == 'y' || more == 'Y');

}

	
