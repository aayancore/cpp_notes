#include <iostream>
using namespace std;

class Person {       
    public:
    int age; 
    string name; 
    Person(){
        cout << "new Person created without name and age "<< endl;
    } 
    Person(string str){
        name = str;
        cout << "new object created with name = " << name << endl;
    }
    Person(string str, int n){
        name = str;
        age = n;
        cout << "new object created " <<endl;
    }  
    void printName() {  // Method/function defined inside the class
        cout << "Welcome Mr. " << name << endl;
    }
    void printAge() {  // Method/function defined inside the class
        cout << "Your Age is " << age << endl;
    }
};

int main() {
  Person momi("MOhammad", 18);     // Create an object of MyClass
  momi.printName(); 
  momi.printAge();
    Person tayyaba("Tayyaba Malik", 24);
    tayyaba.printName();
    tayyaba.printAge();
 Person test;
 Person awais("Awais");
  return 0;
}