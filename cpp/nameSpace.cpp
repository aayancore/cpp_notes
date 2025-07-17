#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

#include "headerLink"
using namespace std;

// namespace MyNamespace {
//   int x = 42;
// }

using namespace MyNamespace;
int main() {
  std::cout << "i am " << age << " years old" << endl;
  //can use both after the using keyword:
  cout << "my name is " << name << endl;
  cout << "i am " << age << " years old" ;
  return 0;
}
