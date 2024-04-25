#include <vector> 

using namespace std; 

//bitmask
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {

		int totalSubsetLength = 1 << nums.size();
		int sum = 0;

		for(int i = 0; i < totalSubsetLength; i++){

			int xorTotal = 0;

			for (size_t j = 0; j < nums.size(); j++)
			{
				if((i & (1 << j))){
					xorTotal ^= nums[j];
				}
			}


			sum += xorTotal;

		}

		return sum;
    }
};