// https://leetcode.com/problems/plus-one/

#include <iostream>
#include <vector>
using namespace std;

vector<int> shift(vector<int>& vect) {
    for (int i = 0; i < vect.size(); i+=2) {
        if (i + 1 < vect.size()) {
            vect[i + 1] = vect[i];
        } else {
            vect[0] = vect[vect.size() - 1];
        }
    }
    
    return vect;
} 

void debug(vector<int> vect) {
    for (auto i: vect) cout << i;
    cout << "" << endl;
}

vector<int> update(vector<int>& digits, int i, int carry) {
    int final = digits[i]%10;

    digits.resize(digits.size() + 1);
    digits = shift(digits);
    digits[i] = carry;
    digits[i + 1] = final;

    return digits; 
}

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    int carry = 0; 
    
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            digits[i]++;
            int final = digits[i]%10;
            carry = digits[i]/10;
            
            if (digits[i] > 9) {
                if (n == 1) {
                    digits = update(digits, i, carry);
                    break;   
                } else {
                    digits[i] = final; 
                }
            } else {
                digits[i] = final;
            }
        }
        else {
            digits[i] += carry;
            carry = digits[i]/10;
            int final = digits[i]%10;
            
            if (digits[i] > 9) {
                if (i == 0) {    
                    digits = update(digits, i, carry); 
                    break;
                } else {
                    digits[i] = final;
                }
            } else {
                digits[i] = final;
            }
        }
    }
    
    return digits;
}

int main() {
    vector<int> num = {4, 5, 9};
    debug(plusOne(num));
    return 0;
}