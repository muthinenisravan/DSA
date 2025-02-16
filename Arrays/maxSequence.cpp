#include<iostream>
#include<vector>

/*Given a binary array nums, return the maximum number of consecutive 1's in the array if you can flip at most one 0.

 

Example 1:

Input: nums = [1,0,1,1,0]
Output: 4
Explanation: 
- If we flip the first zero, nums becomes [1,1,1,1,0] and we have 4 consecutive ones.
- If we flip the second zero, nums becomes [1,0,1,1,1] and we have 3 consecutive ones.
The max number of consecutive ones is 4.

Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 4
Explanation: 
- If we flip the first zero, nums becomes [1,1,1,1,0,1] and we have 4 consecutive ones.
- If we flip the second zero, nums becomes [1,0,1,1,1,1] and we have 4 consecutive ones.
The max number of consecutive ones is 4.

*/

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int z = 1;
        int res = 0;
        int cnt = 0;
        int idx = -1;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            if(num == 0){
                
                if(z){
                    
                    cnt++;
                    z--;
                    
                }else{
                   // z++;
                    if(idx != -1)
                    cnt = i-idx;
                    
                    
                    
                }
                idx = i;
            }else {
                cnt++;
            }
            res = res>cnt?res:cnt;
        }
       // res = res>cnt?res:cnt;
        
        return res;
    }
};
class Solutions {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int zeros = 0;
        int left = 0;
       // int right = 0;

        int len = nums.size();
        int res = 0;
        for(int right = 0 ;right<len;right++){
            if(nums[right] == 0){
                zeros++;
            }

            while(zeros>=2){

                if(nums[left] == 0)
                    zeros--;
                left++;
            }

            res = max(res,right-left+1);

        }
        return res;
    }
};


void print(vector<int> &a){

   cout<<"[";
    for(int i:a)
    {
    	
	   cout<<i<<" ,";

    }
	cout<<"]"<<endl;
}

int main()
{

	vector<int>q{1,5,2,0,6,8,0,6,0};
	Solution t = Solution();
	print(q);
	t.findMaxConsecutiveOnes(q);
	print(q);
	
}
