#include <iostream>
using namespace std;

int lengthOfLastWord(string s) {
    bool found = false;
    int len = 0;
    
    for (int i = s.size() - 1; i >= 0; i--) {
        if (!found) {
            if (s[i] != ' ') {
                found = true;
                len++;
            }
        } else {
            if (s[i] != ' ') {
                len++;
            } else {
                return len;
            }
        }
    }
    
    return len;
}

int main() {
  string str = "Hello world";
  cout << lengthOfLastWord(str) << endl;
  return 0;
}