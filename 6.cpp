// https://www.hackerearth.com/problem/algorithm/jiyas-sequence/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long pdt = 1;
        int curr;
        for(int i = 0; i < n; i++) {
            cin >> curr;
            pdt *= curr;
        }
        int rem = pdt % 10;
        if(rem == 2
            || rem == 3
            || rem == 5) {
                cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}