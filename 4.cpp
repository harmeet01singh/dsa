// https://www.codechef.com/problems/STONES
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string J, S;
		cin >> J;
		cin >> S;
		int i = 0;
		int match_size = 0;
		while(i < S.size()) {
			for(int j = 0; j < J.size(); j++) {
				if(S[i] == J[j]) {
					match_size++;
					break;
				}
			}
			i++;
		}
		cout << match_size << endl;
	}
	return 0;
}
