#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>lookup;

        for(int i=0;i<nums.size();i++)
        {
            if(lookup.find(target-nums[i]) != lookup.end())
            {
                return {i, lookup[target-nums[i]]};
            }

            lookup[nums[i]] = i;
        }

        return nums;

    }
};


int main()
{}
