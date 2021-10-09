#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {    
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    s.erase(std::remove_if(s.begin(), s.end(), []( auto const& c ) -> bool { return !std::isalnum(c); } ), s.end());
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    string temp = s;
    reverse(s.begin(), s.end());
    
    return s == temp;
}

int main() {
    cout << isPalindrome("race, car") << endl;
    return 0;
}