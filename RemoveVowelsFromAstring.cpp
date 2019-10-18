/*
Given a string S, remove the vowels 'a', 'e', 'i', 'o', and 'u' from it, and return the new string.

Example 1:
Input: "leetcodeisacommunityforcoders"
Output: "ltcdscmmntyfrcdrs"
Example 2:

Input: "aeiou"
Output: ""

Note:
S consists of lowercase English letters only.
1 <= S.length <= 1000
 */


#include <iostream>
using namespace std;

string removeVowels(string s)
{
	string temp = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i) != 'a' && s.at(i) != 'e' && s.at(i) != 'i' && s.at(i) != 'o' && s.at(i) != 'u')
		{
			temp += s.at(i);
		}
	}
	return temp;
}
int main()
{
	cout << removeVowels("aeiouxyzaeiousbs") << endl;
	return 0;
}

