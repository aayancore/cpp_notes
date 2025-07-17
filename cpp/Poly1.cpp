#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

class Animal {
  public:
    virtual void sound() {
      cout << "Animal sound\n";
    }
};

class Dog : public Animal {
  public:
    void sound() override {
      cout << "Dog barks\n";
    }
    void test() {
      cout << "Dog test\n";
    }
};

int main() {
  Animal* a;
  Dog d;
  a = &d;
  a->sound(); // Outputs: Dog barks
  d.test();
  return 0;
}