#include <iostream>
#include <vector>
using namespace std;

string reverseWords(string s) {
    vector<string> words;
    string word = "";
    string reversed = "";
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') word += s[i];
        else {
            if (word != "" && word != " ") {
                words.push_back(word);
                word = "";
            }
        }
    }
    
    word.erase(remove(word.begin(), word.end(), ' '), word.end());
    if (word != "") words.push_back(word);
    int n = words.size();
    
    if (n >= 1) {
        for (int i = n - 1; i >= 0; i--) {
            reversed += words[i];

            if (i > 0) {
                reversed += " ";
            }
        }   
    }
    
    return reversed;
}

int main() {
    cout << reverseWords("the sky is blue") << endl;
    return 0;
}