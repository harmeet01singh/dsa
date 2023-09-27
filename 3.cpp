// https://practice.geeksforgeeks.org/problems/reverse-a-string/1

//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends

//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        string rev;
        for(int i = str.size() - 1; i >= 0; i--) {
            rev.push_back(str[i]);
        }
        return rev;
    }
};

//{ Driver Code Starts.
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}
// } Driver Code Ends