#include <iostream>
using namespace std;

class car{
	public:	        
    string brand; 
    string model;  
    int year =2025;
	car(string x, string y, int z){
		brand = x;
		model = y;
		year = z;
	}
	car(string x, string y){
		brand = x;
		model = y;
	}
	void display(){
		cout << brand << " " << model << " " << year << endl;
	}
};

int main() {
	car obj1("BMW", "M5", 2023);
	car obj2("Toyota", "camry", 2024);
	car obj3("audi", "gtetron");

	obj1.display();
	obj2.display();
	obj3.display();

  return 0;
}