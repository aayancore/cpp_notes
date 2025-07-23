#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <map>
#include <set>
using namespace std;

int main(){
    string str = "a quick brown ggggg .";
    set<char, greater<char>> uniqueChars;
    for(int i=0; i<str.length(); i++){
        uniqueChars.insert(str[i]);
    }
    for (auto chr : uniqueChars) 
        cout << chr << " ";
}
