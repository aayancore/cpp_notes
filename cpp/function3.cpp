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
	
		
int main(){
	int Marks[] = {32,23,55,66,45};
	string str = "My name is Mohammad and I live in Fontana, CA ";
	string strWords[50] ;
	string word="";
	int wordCount=0;
	int i=0;
	while (i<str.length()){
		if (str[i] != ' '){
			word = word + str[i];
		//	cout << word << endl;
		}
		else
		{
			strWords[wordCount] = word;
			word="";
			wordCount++;
		}
		
		i++;
	}
	cout << "number of words = " << wordCount << endl;
	for (int i=0; i<wordCount; i++)
		cout << strWords[i] << endl;
//	cout << str[str.length()-1] << endl;
//	
	cout << "array in accending order " << endl;
	strArraySortA(strWords);
	for(int i=0; i<10; i++)
		cout << strWords[i] << endl;
		
//	cout << "array in decending order " << endl;
//	arraySortD(Marks);
//	for(int i=0; i<5; i++)
//		cout << Marks[i] << endl;
	
	
//	cout << "word counts in string array is " << wordCount(str);

	
 	return 0;

	
}

	
