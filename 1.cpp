// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/
#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;    //Reading input from STDIN
	while(t--) {
		int N;
		cin >> N;
		for(int j = 0; j < N; j++) {
			int start = 1 + j;
			int end = N*2 - start - 1;
			for(int k = 0; k < N*2; k++) {
				if(k >= start && k <= end) {
					cout << "#";
				}
				else {
					cout << "*";
				}
			}
			cout << endl;
		}
	}
}
