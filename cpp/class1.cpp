#include <iostream>
using namespace std;

class Person {       
    public:
    int age; 
    string name; 
    string msg;
    Person(){
        msg = "New Object Created " ;
        cout << msg << endl;
    } 
    Person(string str){
        name = str;
        cout << "name = " << name << endl;
    }
    Person(string str, int age1){
        age = age1;
        name = str;
        cout << "Age =  " << age  << endl;
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
 // momi.printName(); 
  //momi.printAge();
    Person tayyaba("Tayyaba Malik", 24);
   // tayyaba.printName();
   // tayyaba.printAge();
 Person test;
 Person awais("Awais");
  return 0;
}