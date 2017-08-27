//https://leetcode.com/problems/reverse-string/description/
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;


string reverseString2(string s) {
	reverse(s.begin(), s.end());

	return s;
}

string reverseString(string s) {
	for (int i = 0; i < s.length()/2; i++)
	{
		char a = s[i];
		char b = s[s.length() - i - 1];
		s[i] = b;
		s[s.length() - i - 1] = a;
	}

	return s;
}

int main()
{
	cout << reverseString2("abc") << endl;
	int a; cin >> a;
	return 0;
}