#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include "headerLink"
using namespace std;

int main() {
   int x = 13, y = 22;

    // Function declared in header
    // file to find the sum
   cout << "Sum is: " << sumOfTwoNumbers(x,y) << endl;
   Adder a(5);
   
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);  

   cout << "Total " << a.getTotal() <<endl;
   return 0;
}

