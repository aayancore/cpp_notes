#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
	int prev=0, current=1, next;
	
	for (int i=1; i<=100; i++){
		next = prev + current; // 3
		cout << next << ", ";
		prev = current; // 2
		current = next; //3
	}
	
}
