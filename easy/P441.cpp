#include <iostream>
using namespace std;

int arrangeCoins(int n) {
    int total = 0;
    int j = 1;
    
    while (n >= 0) {
        n -= j;
        total++;
        j++;
    }
    
    return total - 1;
}

int main() {
    cout << arrangeCoins(5) << endl;
    return 0;
}