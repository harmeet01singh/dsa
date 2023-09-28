#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
        int n;
        cin >> n;
        int lowest = INT_MAX;
        int currentNum;
        int lowSpeedCount = 0;
        for (int i = 0; i < n; i++) {
            cin >> currentNum;
            if(currentNum <= lowest) {
                lowest = currentNum;
                lowSpeedCount++;
            }
        }
        cout << lowSpeedCount << endl;
	}
	return 0;
}
