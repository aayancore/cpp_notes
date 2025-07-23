#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <map>

using namespace std;

int main() {
    string str = "a quick brown ggggg fox jumps over aaaa the lazy dog.";
    // map<char, int> alphabetCount;
    // for (int i=0; i<str.length(); i++)
    // {
    //    if (alphabetCount.find(str[i]) != alphabetCount.end())
    //         alphabetCount.at(str[i]) = alphabetCount.at(str[i]) + 1;
    //     else
    //         alphabetCount.insert({str[i], 1});
    // }
    // for (auto alpha : alphabetCount){
    //     cout << alpha.first << "  = " << alpha.second << " times" << endl;
    // }
    // cout << "Vowels count " << endl;
    map<char, int, greater<char>> vowelCount;
    vowelCount['a'] = 0;
    vowelCount['e'] = 0;
    vowelCount['i'] = 0;
    vowelCount['o'] = 0;
    vowelCount['u'] = 0;
    for (int i=0; i<str.length(); i++)
    {
       if (vowelCount.find(str[i]) != vowelCount.end())
            vowelCount.at(str[i]) = vowelCount.at(str[i]) + 1;        
    }
    for (auto vowel : vowelCount){
        cout << vowel.first << "  = " << vowel.second << " times" << endl;
    }
}