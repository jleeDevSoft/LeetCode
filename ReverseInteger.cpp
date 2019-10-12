#include <iostream>
using namespace std;
/*
Given a 32-bit signed integer, reverse digits on an integer

Example 1:
Input: 123
Output: 321

Example 2:
Input: -123
Output: -321

Example 3:
Input: 120
Output: 21

Note
Assume we are dealing with an environment which could only store integers within the 32 bit signed integer range
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows
*/

int reverseInteger(int num)
{
		// INT_MAX = 2147483647
		// INT_MIN = -2147483648

		int reverseNum = 0;
		int lastNumber = 0;
		while (num != 0)
		{
			//EX: number = 1234
			lastNumber = num % 10; //removes the last integer in num, lastNumber = 4
			num /= 10; // //removes the last integer from num, num = 123

			//CASE1: reversedNum is greater or less the the INT limits before adding lastNumber
			if (reverseNum > INT_MAX  / 10 || reverseNum < INT_MIN /10)
			{
				
				return 0;
			}
			//CASE2: reversedNum is withing the limits of int but adding lastNumber will put it out of bounds
			if (reverseNum == INT_MAX / 10 && lastNumber > 7 || reverseNum == INT_MIN / 10 && lastNumber < 8)
			{
				cout << "case 2" << endl;
				return 0;
			}
			reverseNum = reverseNum * 10 + lastNumber;
		}
		return reverseNum;
}
int main()
{

	return 0;
}
