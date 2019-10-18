
/*
There is a special keyboard with all keys in a single row.
Given a string keyboard of length 26 indicating the layout of the keyboard(indexed from 0 to 25), initially your finger is at index 0. To type a character, you have to move your finger to the index of the desired character.The time taken to move your finger from index i to index j is | i - j | .
You want to type a string word.Write a function to calculate how much time it takes to type it with one finger.

Example 1:
Input: keyboard = "abcdefghijklmnopqrstuvwxyz", word = "cba"
	Output : 4
	Explanation : The index moves from 0 to 2 to write 'c' then to 1 to write 'b' then to 0 again to write 'a'.
	Total time = 2 + 1 + 1 = 4.
	Example 2 :

	Input : keyboard = "pqrstuvwxyzabcdefghijklmno", word = "leetcode"
	Output : 73

	Constraints :

	keyboard.length == 26
	keyboard contains each English lowercase letter exactly once in some order.
	1 <= word.length <= 10 ^ 4
	word[i] is an English lowercase letter.
*/
#include <iostream>
using namespace std;

int subtractPostive(int, int);
int calculateTime(string , string );

int main()
{
	cout << calculateTime("pqrstuvwxyzabcdefghijklmno", "leetcode") << endl;
	return 0;
}
// helper function to calculateTime
// always subtracts the smaller int from the greater int
int subtractPostive(int a, int b)
{
	if (a >= b)
	{
		return a - b;
	}
	if (b >= a)
	{
		return b - a;
	}
}
int calculateTime(string keyboard, string word)
{
	
	int previousIndex = 0; // holds the index location of the previous char
	int totalTime = 0;
	for (int i = 0; i < word.length(); i++)
	{
		// gets the index location of the current char and subtracts that from the previous index to the the total time
		// to subtract the two indecies, using the helper function subtractPostive
		totalTime += subtractPostive(keyboard.find(word.at(i)), previousIndex);
		previousIndex = keyboard.find(word.at(i));
	}
	return totalTime;
}
