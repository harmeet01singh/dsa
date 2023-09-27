// https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
#include <iostream>
using namespace std;
int main() {
	string str1, str2;
	cin >> str1;
	cin >> str2;
	cout << str1.size() << " " << str2.size() << endl;
	cout << str1 + str2 << endl;
	char temp;
	temp = str1[0];
	str1[0] = str2[0];
	str2[0] = temp;
	cout << str1 << " " << str2 << endl;
}
