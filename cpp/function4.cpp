#include <iostream>
#include <string>
using namespace std;



	void testFunction(string &str){
			cout << "in Function str = " << str << endl;
			str = "Fontana" ;
			cout << "changed in function str = " << str << endl;
	}
	
	int square(int a){
		return a * a;
	}
	
	int cube(int a){
		return a*a*a;
	}
	
	bool isEven(int a){
		if (a %2 ==0)
			return true;
		else
			return false;
	}
	
	bool isComposite(int n){
		bool isComposite = false;
		for (int i=2; i<n; i++)
			if (n%2==0){
				isComposite = true;
				break;
			}
		return isComposite;
	}
	
	int sumMarks(int Marks[5])
	{
		Marks[0] =0;
		int sum=0;
		for (int i=0; i<5; i++)
			sum= sum+Marks[i];
		return sum;
	}
	
	void arraySortA(int Marks[5]){
		int temp;
		for(int j=0; j<4; j++)
			for(int i=j+1; i<5; i++)
				if(Marks[j] > Marks[i]){
					temp = Marks [i];
					Marks[i] = Marks[j];
					Marks[j] = temp;
				}							
	}
	
	void arraySortD(int Marks[5]){
		int temp;
		for(int j=0; j<4; j++)
		for(int i=j+1; i<5; i++)
			if(Marks[j] < Marks[i]){
				temp = Marks [i];
				Marks[i] = Marks[j];
				Marks[j] = temp; 
			}
	}
	
	int wordCount(string str){
		int wordCount = 0;
		for (int i=0; i<str.length(); i++)
			if(i > 0 && str[i] == ' ' && str[i-1] != ' ')
				wordCount++;
		if(str[str.length()-1] != ' ')
			wordCount++;
		return wordCount;
	}
	
	void strArraySortA(string Marks[10]){
		string temp;
		for(int j=0; j<10; j++)
			for(int i=j+1; i<10; i++)
				if(Marks[j] > Marks[i]){
					temp = Marks [i];
					Marks[i] = Marks[j];
					Marks[j] = temp;
				}							
	}
		
int main(){
	string str = " My name is   Mohammad and I live   in Fontana, CA ";
	string Word="";
	string arrayWords[50];
	int wordCount = 0;
	
	for(int i=0; i<str.length(); i++)
		if (str[i] == ' '){
			wordCount ++;
			arrayWords[wordCount-1] = Word;
			cout << Word << endl;
			Word = "";
		}
		else
			Word = Word + str[i];
	
	cout << "number of words is " << wordCount << endl;		
	for(int i=0; i<wordCount; i++)		
		cout << arrayWords[i] << endl;
 	return 0;

	
}

	
