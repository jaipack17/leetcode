// https://leetcode.com/problems/ransom-note/

#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, int> calculateFrequencies(string str) {
    unordered_map<char, int> f;

    for (int i = 0; i < str.size(); i++) {
        if (f[str[i]]) {
            f[str[i]]++;
        } else {
            f[str[i]] = 1;
        }
    }

    return f;
}
    
bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> map = calculateFrequencies(magazine);
    bool ans = true;

    for (int i = 0; i < ransomNote.size(); i++) {
        if (!map[ransomNote[i]] || map[ransomNote[i]] == 0) {
            ans = false; 
            break; 
        } else {
            map[ransomNote[i]]--;
        }
    }
    
    return ans;
}

int main() {
    cout << canConstruct("hell", "hello") << endl;

    return 0;
}