#include <iostream>
#include <vector>

/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given num = [2,7,11,15], targe = 9
Becasue num[0] + nums[1] = 2 + 7 = 9
return [0,1].
*/

// case 1: 2,7,11,15 target = 9; return 0.1
// case 2: 3,2,4 target = 6, return 1,2
// case 3: 3,3 target = 6, return 0,1
using namespace std;

void twoSumNestedLoops(vector<int> numbers, int target)
{
	
	int supplement;// current number + supplement = target 
	bool flag = false;// there is only 1 solution, if solution is found there is no need to continue....

	// if x is at numbers[0], y will look at numbers[0-3] looking for the supplement
	// if x is at numbers[1], y will look at numbers[2-3] looking for the supplement, etc....
	for (int x = 0; x < numbers.size()-1; x++)
	{
		supplement = target - numbers.at(x);
		for (int y = x + 1; y<=numbers.size()-1; y++)
		{
			if (supplement == numbers.at(y))
			{
				indices.push_back(x);
				indices.push_back(y);
        
				flag = true;
				break;
			}
		}
	}
}
int main()
{
	vector<int> case1{ 2,7,11,15 };
	vector<int> case2{ 3,2,4};
	vector<int> case3{3,3};

	twoSumNestedLoops(case3, 6);
	return 0;
}
