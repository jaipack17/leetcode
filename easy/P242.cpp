#include <iostream>
using namespace std;
#include <unordered_map>

bool isAnagram(string s, string t) {
    unordered_map<char, int> bin;
    
    for (int i = 0; i < s.length(); i++) {
        if (bin[s[i]]) bin[s[i]]++;
        else bin[s[i]] = 1;
    }
    
    for (int i = 0; i < t.length(); i++) {
        if (!bin[t[i]]) return false;
        if (bin[t[i]] < 1) return false; 
        bin[t[i]]--;
    }
    
    for (auto k : bin)
        if (k.second != 0) return false;
    
    return true;
}

int main() {
    cout << isAnagram("anagram", "nagaram") << endl;

    return 0;
}