#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {
    int at = haystack.find(needle);
    if (at != string::npos) {
        return at;
    } 
    
    return -1;
}

int main() {
  cout << strStr("Hello", "ll") << endl;
  return 0;
}