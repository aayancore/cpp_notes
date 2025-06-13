#include <iostream>
#include <string>
using namespace std;

int main(){
	int Marks[] = {12, 6, 34, 54, 22};

	string value = "Mohammad Aayan Malik fadsj af; ;lkjfadsj fj ladsjfads,ljkf asd" ;

	int a = 'a';
	int A = 'A';
	char ch;
	cout << "a = " << a <<endl;
	cout << "A = " << A << endl;
	
	ch = 'A' +32;
	cout<< "Converting A to a =" << ch <<endl;
	
	for (int i=0; i<value.length(); i++)
	{
		ch = value[i];
		if (ch >='a' && ch <='z')
			ch = ch - 32;
		cout << ch;
	}
	
//	for (int i=0; i<256; i++)
//	{
//		ch = i;
//		cout << i << " = " << ch << endl;
//	}
	
		
//	for (int i=0; i<value.length(); i++)
//		if(value[i] >= 'a' && value[i] <='z')
//			cout << value[i];
//			
//	for (int i=0; i< value.length(); i++) 
//		if ((value[i] >='a' && value[i] <='z') || (value[i] >='A' && value[i] <='Z') || (value[i]==' ') || (value[i] == ';') || (value[i]== ','))
//			cout << value[i];
	
//	for (int i=0; i< value.length(); i++) 
//		if (value[i] != ';')
		//	cout << value[i];		
	
//	for (int i=0; i<value.length(); i++) {
//		if (value[i]== ';')
//			continue;
//		cout << value[i];
//	}
			
//	for (int i=0; i< value.length(); i++) 
//		if (value[i] == ';')
//			break;
//		else
//			cout << value[i];
}
	
